// Source: source/byte_buf.c
// Function: aws_byte_buf_reserve_relative

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// int aws_byte_buf_reserve_relative(
//     struct aws_byte_buf *buffer,
//     size_t additional_length);

int main() {

  struct aws_byte_buf *buffer;
  size_t additional_length;

  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(buffer));

  aws_byte_buf_reserve_relative(buffer, additional_length);

  return 0;
}
