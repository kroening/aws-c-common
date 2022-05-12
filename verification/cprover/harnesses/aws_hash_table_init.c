// Source: source/hash_table.c
// Function: aws_hash_table_init

#include <aws/common/hash_table.h>

// int aws_hash_table_init(
//     struct aws_hash_table *map,
//     struct aws_allocator *alloc,
//     size_t size,
//     aws_hash_fn *hash_fn,
//     aws_hash_callback_eq_fn *equals_fn,
//     aws_hash_callback_destroy_fn *destroy_key_fn,
//     aws_hash_callback_destroy_fn *destroy_value_fn);

int main() {

  struct aws_hash_table *map;
  struct aws_allocator *alloc;
  size_t size;
  aws_hash_fn *hash_fn;
  aws_hash_callback_eq_fn *equals_fn;
  aws_hash_callback_destroy_fn *destroy_key_fn;
  aws_hash_callback_destroy_fn *destroy_value_fn;

  aws_hash_table_init(
    map, alloc, size, hash_fn, equals_fn, destroy_key_fn, destroy_value_fn);

  return 0;
}
