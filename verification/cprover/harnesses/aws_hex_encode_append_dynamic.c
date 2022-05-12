// Source: source/encoding.c
// Function: aws_hex_encode_append_dynamic

#include <aws/common/encoding.h>

// int aws_hex_encode_append_dynamic(
//     const struct aws_byte_cursor *AWS_RESTRICT to_encode,
//     struct aws_byte_buf *AWS_RESTRICT output);

int main() {

  const struct aws_byte_cursor *to_encode;
  struct aws_byte_buf *output;

  aws_hex_encode_append_dynamic(to_encode, output);

  return 0;
}
