// Source: source/byte_buf.c
// Function: aws_byte_cursor_next_split

#include <aws/common/byte_buf.h>

// bool aws_byte_cursor_next_split(
//     const struct aws_byte_cursor *AWS_RESTRICT input_str,
//     char split_on,
//     struct aws_byte_cursor *AWS_RESTRICT substr);

int main() {

  const struct aws_byte_cursor *input_str;
  char split_on;
  struct aws_byte_cursor *substr;

  aws_byte_cursor_next_split(input_str, split_on, substr);

  return 0;
}
