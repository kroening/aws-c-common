// Source: source/file.c
// Function: aws_byte_buf_init_from_file

#include <aws/common/file.h>

#include "aws_byte_buf.inc"

// int aws_byte_buf_init_from_file(
//     struct aws_byte_buf *out_buf,
//     struct aws_allocator *alloc,
//     const char *filename);

int main() {

  struct aws_byte_buf *out_buf;
  struct aws_allocator *alloc = aws_default_allocator();
  const char *filename;

  __CPROVER_assume(__CPROVER_rw_ok(out_buf));
  __CPROVER_assume(__CPROVER_is_cstring(filename));

  aws_byte_buf_init_from_file(out_buf, alloc, filename);

  return 0;
}
