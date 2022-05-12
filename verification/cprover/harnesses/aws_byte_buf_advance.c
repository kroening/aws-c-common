// Source: source/byte_buf.c
// Function: aws_byte_buf_advance

#include <aws/common/byte_buf.h>

// bool aws_byte_buf_advance(
//     struct aws_byte_buf *const AWS_RESTRICT buffer,
//     struct aws_byte_buf *const AWS_RESTRICT output,
//     const size_t len);

int main() {

  struct aws_byte_buf *const AWS_RESTRICT buffer;
  struct aws_byte_buf *const AWS_RESTRICT output;
  const size_t len;

  aws_byte_buf_advance(buffer, output, len);

  return 0;
}
