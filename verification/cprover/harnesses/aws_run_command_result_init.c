// Source: source/process_common.c
// Function: aws_run_command_result_init

#include <aws/common/process.h>

// int aws_run_command_result_init(
//     struct aws_allocator *allocator,
//     struct aws_run_command_result *result);

int main() {

  struct aws_allocator *allocator;
  struct aws_run_command_result *result;

  aws_run_command_result_init(allocator, result);

  return 0;
}
