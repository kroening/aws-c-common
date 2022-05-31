// Source: source/byte_buf.c
// Function: aws_byte_cursor_next_split

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// bool aws_byte_cursor_next_split(
//     const struct aws_byte_cursor *AWS_RESTRICT input_str,
//     char split_on,
//     struct aws_byte_cursor *AWS_RESTRICT substr);

int main() {

  const struct aws_byte_cursor *input_str;
  char split_on;
  struct aws_byte_cursor *substr;

  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(input_str));
  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(substr));

  aws_byte_cursor_next_split(input_str, split_on, substr);

  return 0;
}
