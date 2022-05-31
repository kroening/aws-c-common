// Source: source/hash_table.c
// Function: aws_hash_callback_string_eq

#include <aws/common/hash_table.h>
#include <aws/common/string.h>

#include "aws_string.inc"

// bool aws_hash_callback_string_eq(const void *a, const void *b);

int main() {

  const void *a;
  const void *b;

  __CPROVER_assume(CPROVER_aws_string_is_valid(a));
  __CPROVER_assume(CPROVER_aws_string_is_valid(b));

  aws_hash_callback_string_eq(a, b);

  return 0;
}
