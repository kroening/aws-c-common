// Source: source/byte_buf.c
// Function: aws_byte_buf_init

#include <aws/common/byte_buf.h>

// int aws_byte_buf_init(
//    struct aws_byte_buf *buf,
//    struct aws_allocator *allocator,
//    size_t capacity);

int main() {

  struct aws_byte_buf *buf;
  struct aws_allocator *allocator;
  size_t capacity;

  aws_byte_buf_init(buf, allocator, capacity);

  return 0;
}
