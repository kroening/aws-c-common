// Source: source/logging.c
// Function: aws_string_to_log_level

#include <aws/common/logging.h>

// int aws_string_to_log_level(
//     const char *level_string,
//     enum aws_log_level *log_level);

int main() {

  const char *level_string;
  enum aws_log_level *log_level;

  aws_string_to_log_level(level_string, log_level);

  return 0;
}
