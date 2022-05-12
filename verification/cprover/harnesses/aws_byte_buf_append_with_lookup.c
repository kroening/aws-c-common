// Source: source/byte_buf.c
// Function: aws_byte_buf_append_with_lookup

#include <aws/common/byte_buf.h>

// int aws_byte_buf_append_with_lookup(
//     struct aws_byte_buf *AWS_RESTRICT to,
//     const struct aws_byte_cursor *AWS_RESTRICT from,
//     const uint8_t *lookup_table);

int main() {

  struct aws_byte_buf *to;
  const struct aws_byte_cursor *from;
  const uint8_t *lookup_table;

  aws_byte_buf_append_with_lookup(to, from, lookup_table);

  return 0;
}
