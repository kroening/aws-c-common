// Source: source/allocator.c
// Function: aws_mem_acquire_many

#include <aws/common/allocator.h>

// void *aws_mem_acquire_many(
//     struct aws_allocator *allocator,
//     size_t count, ...);

int main() {

  struct aws_allocator *allocator;
  size_t count;

  aws_mem_acquire_many(allocator, count);

  return 0;
}
