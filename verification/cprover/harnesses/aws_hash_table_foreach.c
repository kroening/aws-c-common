// Source: source/hash_table.c
// Function: aws_hash_table_foreach

#include <aws/common/hash_table.h>

#include "aws_hash_table.inc"

// int aws_hash_table_foreach(
//     struct aws_hash_table *map,
//     int (*callback)(void *context, struct aws_hash_element *p_element),
//     void *context);

int main() {

  struct aws_hash_table *map;
  int (*callback)(void *context, struct aws_hash_element *p_element);
  void *context;

  __CPROVER_assume(CPROVER_aws_hash_table_is_valid(map));

  aws_hash_table_foreach(map, callback, context);

  return 0;
}
