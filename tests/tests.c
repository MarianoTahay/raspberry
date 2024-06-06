#include <stdio.h>
#include <string.h>

#include "tests.h"

struct test {
    const char *name;
    test_func *function;
};

static const struct test tests[] = {
    {"alarm-negative", test_alarm_negative},
    {"alarm-zero", test_alarm_zero},
    {"one-thread", test_one_thread},
    {"multi-thread", test_multi_thread}
};

static const char *test_name;

void run_test(const char *name){
    const struct test *t;

    for (t = tests; t < tests + sizeof tests / sizeof *tests; t++){
        if (!strcmp (name, t->name)){
            test_name = name;
            printf("(%s) Begin\n", test_name);
            t->function();
            printf("(%s) End\n", test_name);
            return;
        }
    }
    
}

void pass (void){
  printf ("(%s) PASS\n", test_name);
}