// Source: source/byte_buf.c
// Function: aws_byte_buf_init_copy_from_cursor

#include <aws/common/byte_buf.h>

// int aws_byte_buf_init_copy_from_cursor(
//     struct aws_byte_buf *dest,
//     struct aws_allocator *allocator,
//     struct aws_byte_cursor src);

#include "aws_byte_buf.inc"

int main() {

  struct aws_byte_buf *dest;
  struct aws_allocator *allocator;
  struct aws_byte_cursor src;

  aws_byte_buf_init_copy_from_cursor(dest, allocator, src);

  return 0;
}
