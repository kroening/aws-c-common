// Source: source/byte_buf.c
// Function: aws_byte_cursor_compare_lookup

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// int aws_byte_cursor_compare_lookup(
//     const struct aws_byte_cursor *lhs,
//     const struct aws_byte_cursor *rhs,
//     const uint8_t *lookup_table);

int main() {

  const struct aws_byte_cursor *lhs;
  const struct aws_byte_cursor *rhs;
  const uint8_t *lookup_table;

  aws_byte_cursor_compare_lookup(lhs, rhs, lookup_table);

  return 0;
}
