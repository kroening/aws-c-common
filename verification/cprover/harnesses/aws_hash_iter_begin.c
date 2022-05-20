// Source: source/hash_table.c
// Function: aws_hash_iter_begin

#include <aws/common/hash_table.h>

#include "aws_hash_table.inc"

// struct aws_hash_iter aws_hash_iter_begin(const struct aws_hash_table *map);

int main() {

  const struct aws_hash_table *map;

  __CPROVER_assume(CPROVER_aws_hash_table_is_valid(map));

  aws_hash_iter_begin(map);

  return 0;
}
