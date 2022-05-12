// Source: source/hash_table.c
// Function: aws_hash_table_remove

#include <aws/common/hash_table.h>

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

  aws_hash_table_remove(map, key, p_value, was_present);

  return 0;
}
