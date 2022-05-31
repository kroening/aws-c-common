// Source: source/hash_table.c
// Function: aws_hash_callback_c_str_eq

#include <aws/common/hash_table.h>

bool aws_hash_callback_c_str_eq(const void *a, const void *b);

int main() {

  const void *a;
  const void *b;

  __CPROVER_assume(__CPROVER_is_cstring(a));
  __CPROVER_assume(__CPROVER_is_cstring(b));

  aws_hash_callback_c_str_eq(a, b);

  return 0;
}
