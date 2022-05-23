// Source: source/ring_buffer.c
// Function: aws_ring_buffer_acquire

#include <aws/common/byte_buf.h>
#include <aws/common/ring_buffer.h>

#include "aws_byte_buf.inc"
#include "aws_ring_buf.inc"

// int aws_ring_buffer_acquire(
//     struct aws_ring_buffer *ring_buf,
//     size_t requested_size,
//     struct aws_byte_buf *dest);

int main() {

  struct aws_ring_buffer *ring_buf;
  size_t requested_size;
  struct aws_byte_buf *dest;

  __CPROVER_assume(CPROVER_aws_ring_buffer_is_valid(ring_buf));
  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(dest));

  aws_ring_buffer_acquire(ring_buf, requested_size, dest);

  return 0;
}
