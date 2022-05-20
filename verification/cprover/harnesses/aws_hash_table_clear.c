// Source: source/hash_table.c
// Function: aws_hash_table_clear

#include <aws/common/hash_table.h>

#include "aws_hash_table.inc"

// void aws_hash_table_clear(struct aws_hash_table *map);

int main() {

  struct aws_hash_table *map;

  __CPROVER_assume(CPROVER_aws_hash_table_is_valid(map));

  aws_hash_table_clear(map);

  return 0;
}
