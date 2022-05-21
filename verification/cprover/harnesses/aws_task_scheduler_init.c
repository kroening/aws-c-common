// Source: source/task_scheduler.c
// Function: aws_task_scheduler_init

#include <aws/common/task_scheduler.h>

// int aws_task_scheduler_init(
//     struct aws_task_scheduler *scheduler,
//     struct aws_allocator *alloc);

int main() {

  struct aws_task_scheduler *scheduler;
  struct aws_allocator *alloc = aws_default_allocator();

  __CPROVER_assume(__CPROVER_rw_ok(scheduler));

  aws_task_scheduler_init(scheduler, alloc);

  return 0;
}
