#include <stdlib.h> //getenv, atoi
#include <stdio.h>  //printf


// int main()
// {
//     char *repstext = getenv("reps");
//     int reps = repstext ? atoi(repstext) : 10;

//     char *msg = getenv("msg");
//     if (!msg) msg = "Hello.";

//     for (int i = 0; i < reps; i++)
//         printf("%s\n", msg);
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

int main(void)
{
    char *repstext = NULL;
    size_t reps_len = 0;
    long reps = 10; // Default value

    // 1. Fetch the "reps" environment variable using _dupenv_s
    // Passing NULL for size_t if you don't need the string length is valid,
    // but tracking 'reps_len' is considered best practice.
    if (_dupenv_s(&repstext, &reps_len, "reps") == 0 && repstext != NULL) {
        char *endptr;
        errno = 0; // Reset errno before processing
        long val = strtol(repstext, &endptr, 10);

        // Validation & Bound checking
        if (endptr == repstext || errno == ERANGE) {
            fprintf(stderr, "Warning: Invalid 'reps' value. Using default of 10.\n");
            reps = 10;
        } else if (val < 0 || val > 100000) { 
            fprintf(stderr, "Warning: 'reps' out of safe bounds (0-100000). Using default of 10.\n");
            reps = 10;
        } else {
            reps = val;
        }
    }

    // 2. Fetch the "msg" environment variable using _dupenv_s
    char *msg = NULL;
    size_t msg_len = 0;
    
    _dupenv_s(&msg, &msg_len, "msg");
    
    // Assign to a display pointer so we can safely fall back to a default literal literal 
    // without messing up our heap-allocated pointer needed for free()
    const char *display_msg = msg ? msg : "Hello.";

    // 3. Print the message safely
    for (long i = 0; i < reps; i++) {
        printf("%s\n", display_msg); 
    }
    
    // 4. Memory Cleanup (CRITICAL for _dupenv_s)
    // free(NULL) is safely ignored in C, but checking protects logic.
    if (repstext) {
        free(repstext);
    }
    if (msg) {
        free(msg);
    }

    return 0;
}