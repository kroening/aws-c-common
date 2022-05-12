// Source: source/byte_buf.c
// Function: aws_byte_buf_reserve_relative

#include <aws/common/byte_buf.h>

// int aws_byte_buf_reserve_relative(
//     struct aws_byte_buf *buffer,
//     size_t additional_length);

int main() {

  struct aws_byte_buf *buffer;
  size_t additional_length;

  aws_byte_buf_reserve_relative(buffer, additional_length);

  return 0;
}
