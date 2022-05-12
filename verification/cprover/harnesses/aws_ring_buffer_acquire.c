// Source: source/ring_buffer.c
// Function: aws_ring_buffer_acquire

#include <aws/common/ring_buffer.h>

// int aws_ring_buffer_acquire(
//     struct aws_ring_buffer *ring_buf,
//     size_t requested_size,
//     struct aws_byte_buf *dest);

int main() {

  struct aws_ring_buffer *ring_buf;
  size_t requested_size;
  struct aws_byte_buf *dest;

  aws_ring_buffer_acquire(ring_buf, requested_size, dest);

  return 0;
}
