// Source: source/hash_table.c
// Function: aws_hash_table_remove_element

#include <aws/common/hash_table.h>

// int aws_hash_table_remove_element(
//     struct aws_hash_table *map,
//     struct aws_hash_element *p_value);

int main() {

  struct aws_hash_table *map;
  struct aws_hash_element *p_value;

  aws_hash_table_remove_element(map, p_value);

  return 0;
}
