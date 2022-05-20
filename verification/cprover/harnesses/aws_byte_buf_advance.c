// Source: source/byte_buf.c
// Function: aws_byte_buf_advance

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// bool aws_byte_buf_advance(
//     struct aws_byte_buf *const AWS_RESTRICT buffer,
//     struct aws_byte_buf *const AWS_RESTRICT output,
//     const size_t len);

int main() {

  struct aws_byte_buf *const buffer;
  struct aws_byte_buf *const output;
  const size_t len;

  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(buffer));
  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(output));

  aws_byte_buf_advance(buffer, output, len);

  return 0;
}
