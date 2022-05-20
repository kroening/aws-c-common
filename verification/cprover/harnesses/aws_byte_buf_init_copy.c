// Source: source/byte_buf.c
// Function: aws_byte_buf_init_copy

#include <aws/common/byte_buf.h>

// int aws_byte_buf_init_copy(
//      struct aws_byte_buf *dest,
//      struct aws_allocator *allocator,
//      const struct aws_byte_buf *src);

#include "aws_byte_buf.inc"

int main() {

  struct aws_byte_buf *dest;
  struct aws_allocator *allocator = aws_default_allocator();
  const struct aws_byte_buf *src;

  __CPROVER_assume(__CPROVER_rw_ok(dest));
  __CPROVER_assume(aws_byte_buf_is_valid(src));

  aws_byte_buf_init_copy(dest, allocator, src);

  return 0;
}
