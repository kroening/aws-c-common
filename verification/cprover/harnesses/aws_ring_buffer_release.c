// Source: source/ring_buffer.c
// Function: aws_ring_buffer_release

#include <aws/common/ring_buffer.h>

#include "aws_byte_buffer.inc"

// void aws_ring_buffer_release(
//     struct aws_ring_buffer *ring_buffer,
//     struct aws_byte_buf *buf);

int main() {

  struct aws_ring_buffer *ring_buffer;
  struct aws_byte_buf *buf;

  __CPROVER_assume(__CPROVER_r_ok(ring_buffer));
  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(buf));

  aws_ring_buffer_release(ring_buffer, buf);

  return 0;
}
