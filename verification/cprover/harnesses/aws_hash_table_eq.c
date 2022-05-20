// Source: source/hash_table.c
// Function: aws_hash_table_eq

#include <aws/common/hash_table.h>

#include "aws_hash_table.inc"

// bool aws_hash_table_eq(
//     const struct aws_hash_table *a,
//     const struct aws_hash_table *b,
//     aws_hash_callback_eq_fn *value_eq);

int main() {

  const struct aws_hash_table *a;
  const struct aws_hash_table *b;
  aws_hash_callback_eq_fn *value_eq;

  __CPROVER_assume(CPROVER_aws_has_table_is_valid(a));
  __CPROVER_assume(CPROVER_aws_has_table_is_valid(b));

  aws_hash_table_eq(a, b, value_eq);

  return 0;
}
