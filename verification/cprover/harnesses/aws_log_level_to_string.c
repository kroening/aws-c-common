// Source: source/logging.c
// Function: aws_log_level_to_string

#include <aws/common/logging.h>

// int aws_log_level_to_string(
//     enum aws_log_level log_level,
//     const char **level_string);

int main() {

  enum aws_log_level log_level;
  const char **level_string;

  __CPROVER_assume(__CPROVER_w_ok(level_string));

  aws_log_level_to_string(log_level, level_string);

  return 0;
}
