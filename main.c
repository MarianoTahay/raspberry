#include <stdio.h>
#include "pico/stdlib.h"

#include "tests/tests.h" 
#include "devices/timer.h"
#include "threads/thread.h"

#define MAX_BUFFER 100

static void run_task(char *argv);

int main() {
    stdio_init_all();

    char test[MAX_BUFFER];
    int buffer_index = 0;

    thread_init();

    timer_init();

    printf("OS Booted...\n");

    while (true) {

        char c = uart_getc(uart0); 

        if(c == '\r'){
            test[buffer_index] = '\0';
            run_task(test);
            break;
        } else{
            test[buffer_index++] = c;
        }
    }

    return 0;
}

static void run_task(char *argv){
    printf ("Executing '%s':\n", argv);

    run_test (argv);
  
    printf ("Execution of '%s' complete.\n", argv);
}
