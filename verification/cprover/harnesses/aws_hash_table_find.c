// Source: source/hash_table.c
// Function: aws_hash_table_find

#include <aws/common/hash_table.h>

// int aws_hash_table_find(
//     const struct aws_hash_table *map,
//     const void *key,
//     struct aws_hash_element **p_elem);

int main() {

  const struct aws_hash_table *map;
  const void *key;
  struct aws_hash_element **p_elem;

  aws_hash_table_find(map, key, p_elem);

  return 0;
}
