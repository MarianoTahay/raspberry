#include <stdint.h>
#include "../list.h"

enum thread_status {
    THREAD_RUNNING,
    THREAD_READY,
    THREAD_BLOCKED,
    THREAD_FINISHED
};

typedef struct thread {
    int id;
    enum thread_status status;
    struct list_elem allelem;
    void (*function)(void *);
    void *arg;
    struct list_elem elem;
    uint64_t blocked_ticks;
} thread_t;


thread_t *thread_current(void);
void thread_init(void);
void thread_unblock(thread_t *t);
void thread_block(void);
void thread_yield(void);
void thread_create(void (*function)(void *), void *arg);

typedef void thread_action_func (struct thread *t, void *aux);
void thread_foreach (thread_action_func *, void *);
void thread_check_blocked(struct thread *, void * aux);

void schedule(void);

void thread_tick (void);

void thread_join(void);

void lista_ready_threads(void);