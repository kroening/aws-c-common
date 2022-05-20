// Source: source/hash_table.c
// Function: aws_hash_table_remove

#include <aws/common/hash_table.h>

#include "aws_hash_table.inc"

// int aws_hash_table_remove(
//     struct aws_hash_table *map,
//     const void *key,
//     struct aws_hash_element *p_value,
//     int *was_present);

int main() {

  struct aws_hash_table *map;
  const void *key;
  struct aws_hash_element *p_value;
  int *was_present;

  __CPROVER_assume(CPROVER_aws_hash_table_is_valid(map));
  __CPROVER_assume(__CPROVER_rw_ok(was_present));

  aws_hash_table_remove(map, key, p_value, was_present);

  return 0;
}
