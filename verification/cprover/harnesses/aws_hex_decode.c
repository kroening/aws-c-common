// Source: source/encoding.c
// Function: aws_hex_decode

#include <aws/common/encoding.h>

#include "aws_byte_buf.inc"

// int aws_hex_decode(
//     const struct aws_byte_cursor *AWS_RESTRICT to_decode,
//     struct aws_byte_buf *AWS_RESTRICT output);

int main() {

  const struct aws_byte_cursor *to_decode;
  struct aws_byte_buf *output;

  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(to_decode));
  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(output));

  aws_hex_decode(to_decode, output);

  return 0;
}
