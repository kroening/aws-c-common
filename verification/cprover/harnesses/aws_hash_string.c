// Source: source/hash_table.c
// Function: aws_hash_string

#include <aws/common/hash_table.h>

// uint64_t aws_hash_string(const void *item);

int main() {

  const void *item;

  __CPROVER_assume(CPROVER_aws_string_is_valid(item));

  aws_hash_string(item);

  return 0;
}
