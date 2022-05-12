// Source: source/hash_table.c
// Function: aws_hash_table_clear

#include <aws/common/hash_table.h>

// void aws_hash_table_clear(struct aws_hash_table *map);

int main() {

  struct aws_hash_table *map;

  aws_hash_table_clear(map);

  return 0;
}
