// Source: source/hash_table.c
// Function: aws_hash_iter_begin

#include <aws/common/hash_table.h>

// struct aws_hash_iter aws_hash_iter_begin(const struct aws_hash_table *map);

int main() {

  const struct aws_hash_table *map;

  aws_hash_iter_begin(map);

  return 0;
}
