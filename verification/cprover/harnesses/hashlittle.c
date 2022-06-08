// Source: source/hash_table.c
// Function: aws_hash_string

#include <aws/common/hash_table.h>

// use the memory-safe version
#define VALGRIND

#include <aws/common/private/lookup3.inl>

// uint32_t hashlittle( const void *key, size_t length, uint32_t initval)

int main() {

  const void *key;
  size_t length;
  uint32_t initval;

  __CPROVER_assume(__CPROVER_r_ok(key, length));

  hashlittle(key, length, initval);

  return 0;
}
