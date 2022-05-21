// Source: source/thread_scheduler.c
// Function: aws_thread_scheduler_cancel_task

#include <aws/common/thread_scheduler.h>

// void aws_thread_scheduler_cancel_task(
//     struct aws_thread_scheduler *scheduler,
//     struct aws_task *task);

int main() {

  struct aws_thread_scheduler *scheduler;
  struct aws_task *task;

  __CPROVER_assume(__CPROVER_rw_ok(scheduler));
  __CPROVER_assume(__CPROVER_rw_ok(task));

  aws_thread_scheduler_cancel_task(scheduler, task);

  return 0;
}
