// Source: source/byte_buf.c
// Function: aws_byte_buf_reserve

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// int aws_byte_buf_reserve(struct aws_byte_buf *buffer, size_t requested_capacity);

int main() {

  struct aws_byte_buf *buffer;
  size_t requested_capacity;

  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(buffer));

  aws_byte_buf_reserve(buffer, requested_capacity);

  return 0;
}
