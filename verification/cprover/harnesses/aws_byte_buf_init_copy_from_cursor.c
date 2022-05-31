// Source: source/byte_buf.c
// Function: aws_byte_buf_init_copy_from_cursor

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// int aws_byte_buf_init_copy_from_cursor(
//     struct aws_byte_buf *dest,
//     struct aws_allocator *allocator,
//     struct aws_byte_cursor src);

int main() {

  struct aws_byte_buf *dest;
  struct aws_allocator *allocator = aws_default_allocator();
  struct aws_byte_cursor src;

  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(dest));
  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(&src));

  aws_byte_buf_init_copy_from_cursor(dest, allocator, src);

  return 0;
}
