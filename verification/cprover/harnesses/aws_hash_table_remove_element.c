// Source: source/hash_table.c
// Function: aws_hash_table_remove_element

#include <aws/common/hash_table.h>

#include "aws_hash_table.inc"

// int aws_hash_table_remove_element(
//     struct aws_hash_table *map,
//     struct aws_hash_element *p_value);

int main() {

  struct aws_hash_table *map;
  struct aws_hash_element *p_value;

  __CPROVER_assume(CPROVER_aws_hash_table_is_valid(map));

  aws_hash_table_remove_element(map, p_value);

  return 0;
}
