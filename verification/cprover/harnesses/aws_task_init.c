// Source: source/task_scheduler.c
// Function: aws_task_init

#include <aws/common/task_scheduler.h>

// void aws_task_init(
//     struct aws_task *task,
//     aws_task_fn *fn,
//     void *arg,
//     const char *type_tag);

int main() {

  struct aws_task *task;
  aws_task_fn *fn;
  void *arg;
  const char *type_tag;

  __CPROVER_assume(__CPROVER_rw_ok(task));

  aws_task_init(task, fn, arg, type_tag);

  return 0;
}
