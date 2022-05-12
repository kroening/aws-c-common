// Source: source/linked_hash_table.c
// Function: aws_linked_hash_table_clean_up

#include <aws/common/linked_hash_table.h>

// void aws_linked_hash_table_clean_up(struct aws_linked_hash_table *table);

int main() {

  struct aws_linked_hash_table *table;

  aws_linked_hash_table_clean_up(table);

  return 0;
}
