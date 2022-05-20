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
  struct aws_allocator *alloc;
  const char *filename;

  aws_byte_buf_init_from_file(out_buf, alloc, filename);

  return 0;
}
