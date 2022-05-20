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

  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(lhs));
  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(rhs));
  __CPROVER_assume(__CPROVER_r_ok(lookup_table, 0x100));

  aws_byte_cursor_compare_lookup(lhs, rhs, lookup_table);

  return 0;
}
