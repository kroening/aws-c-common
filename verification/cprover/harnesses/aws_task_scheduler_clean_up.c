// Source: source/task_scheduler.c
// Function: aws_task_scheduler_clean_up

#include <aws/common/task_scheduler.h>

// void aws_task_scheduler_clean_up(struct aws_task_scheduler *scheduler);

int main() {

  struct aws_task_scheduler *scheduler;

  __CPROVER_assume(__CPROVER_rw_ok(scheduler));

  aws_task_scheduler_clean_up(scheduler);

  return 0;
}
