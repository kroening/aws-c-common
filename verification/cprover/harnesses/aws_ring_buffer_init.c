// Source: source/ring_buffer.c
// Function: aws_ring_buffer_init

#include <aws/common/ring_buffer.h>

// int aws_ring_buffer_init(
//     struct aws_ring_buffer *ring_buf,
//     struct aws_allocator *allocator,
//     size_t size);

int main() {

  struct aws_ring_buffer *ring_buf;
  struct aws_allocator *allocator;
  size_t size;

  aws_ring_buffer_init(ring_buf, allocator, size);

  return 0;
}
