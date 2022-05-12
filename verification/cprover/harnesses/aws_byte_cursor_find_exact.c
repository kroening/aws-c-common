// Source: source/byte_buf.c
// Function: aws_byte_cursor_find_exact

#include <aws/common/byte_buf.h>

// int aws_byte_cursor_find_exact(
//     const struct aws_byte_cursor *AWS_RESTRICT input_str,
//     const struct aws_byte_cursor *AWS_RESTRICT to_find,
//     struct aws_byte_cursor *first_find);

int main() {

  const struct aws_byte_cursor *input_str;
  const struct aws_byte_cursor *to_find;
  struct aws_byte_cursor *first_find;

  aws_byte_cursor_find_exact(input_str, to_find, first_find);

  return 0;
}
