// Source: source/byte_buf.c
// Function: aws_byte_buf_cat

#include <aws/common/byte_buf.h>

// int aws_byte_buf_cat(struct aws_byte_buf *dest, size_t number_of_args, ...);

int main() {

  struct aws_byte_buf *dest;
  size_t number_of_args;

  aws_byte_buf_cat(dest, number_of_args);

  return 0;
}
