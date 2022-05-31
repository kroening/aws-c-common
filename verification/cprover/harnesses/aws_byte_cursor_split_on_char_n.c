// Source: source/byte_buf.c
// Function: aws_byte_cursor_split_on_char_n

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// int aws_byte_cursor_split_on_char_n(
//     const struct aws_byte_cursor *AWS_RESTRICT input_str,
//     char split_on,
//     size_t n,
//     struct aws_array_list *AWS_RESTRICT output);

int main() {

  const struct aws_byte_cursor *input_str;
  char split_on;
  size_t n;
  struct aws_array_list *output;

  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(input_str));

  aws_byte_cursor_split_on_char_n(input_str, split_on, n, output);

  return 0;
}
