// Source: source/hash_table.c
// Function: aws_hash_callback_c_str_eq

#include <aws/common/hash_table.h>

bool aws_hash_callback_c_str_eq(const void *a, const void *b);

int main() {

  const void *a;
  const void *b;

  aws_hash_callback_c_str_eq(a, b);

  return 0;
}
