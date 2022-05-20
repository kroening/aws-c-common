// Source: source/process_common.c
// Function: aws_run_command

#include <aws/common/process.h>

// int aws_run_command(
//     struct aws_allocator *allocator,
//     struct aws_run_command_options *options,
//     struct aws_run_command_result *result);

int main() {

  struct aws_allocator *allocator = aws_default_allocator();
  struct aws_run_command_options *options;
  struct aws_run_command_result *result;

  __CPROVER_assume(__CPROVER_r_ok(options));
  __CPROVER_assume(__CPROVER_is_cstring(options->command));
  __CPROVER_assume(__CPROVER_rw_ok(result));

  aws_run_command(allocator, options, result);

  return 0;
}
