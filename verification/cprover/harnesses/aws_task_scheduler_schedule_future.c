// Source: source/task_scheduler.c
// Function: aws_task_scheduler_schedule_future

#include <aws/common/task_scheduler.h>

// void aws_task_scheduler_schedule_future(
//     struct aws_task_scheduler *scheduler,
//     struct aws_task *task,
//     uint64_t time_to_run);

int main() {

  struct aws_task_scheduler *scheduler;
  struct aws_task *task;
  uint64_t time_to_run;

  aws_task_scheduler_schedule_future(scheduler, task, time_to_run);

  return 0;
}
