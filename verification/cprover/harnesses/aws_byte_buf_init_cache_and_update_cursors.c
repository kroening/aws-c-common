// Source: source/byte_buf.c
// Function: aws_byte_buf_init_cache_and_update_cursors

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// int aws_byte_buf_init_cache_and_update_cursors(
//     struct aws_byte_buf *dest,
//     struct aws_allocator *allocator,
//     ...);

int main() {

  struct aws_byte_buf *dest;
  struct aws_allocator *allocator = aws_default_allocator();

  aws_byte_buf_init_cache_and_update_cursors(dest, allocator);

  return 0;
}
