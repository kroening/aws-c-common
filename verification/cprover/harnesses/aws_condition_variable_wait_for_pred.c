// Source: source/condition_variable.c
// Function: aws_condition_variable_wait_for_pred

#include <aws/common/condition_variable.h>

// int aws_condition_variable_wait_for_pred(
//     struct aws_condition_variable *condition_variable,
//     struct aws_mutex *mutex,
//     int64_t time_to_wait,
//     aws_condition_predicate_fn *pred,
//     void *pred_ctx);

int main() {

  struct aws_condition_variable *condition_variable;
  struct aws_mutex *mutex;
  int64_t time_to_wait;
  aws_condition_predicate_fn *pred;
  void *pred_ctx;

  aws_condition_variable_wait_for_pred(
    condition_variable, mutex, time_to_wait, pred, pred_ctx);

  return 0;
}
