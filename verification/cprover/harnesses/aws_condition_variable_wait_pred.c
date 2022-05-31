// Source: source/condition_variable.c
// Function: aws_condition_variable_wait_pred

#include <aws/common/condition_variable.h>

// int aws_condition_variable_wait_pred(
//     struct aws_condition_variable *condition_variable,
//     struct aws_mutex *mutex,
//     aws_condition_predicate_fn *pred,
//     void *pred_ctx);

bool nondet_bool();

bool my_pred(void *)
{
  return nondet_bool();
}

int main() {

  struct aws_condition_variable *condition_variable;
  struct aws_mutex *mutex;
  aws_condition_predicate_fn *pred = my_pred;
  void *pred_ctx;

  aws_condition_variable_wait_pred(
    condition_variable, mutex, pred, pred_ctx);

  return 0;
}
