// Source: source/allocator.c
// Function: aws_mem_realloc

#include <aws/common/allocator.h>

// int aws_mem_realloc(
//     struct aws_allocator *allocator,
//     void **ptr,
//     size_t oldsize,
//     size_t newsize);

int main() {

  struct aws_allocator *allocator;
  void **ptr;
  size_t oldsize;
  size_t newsize;

  aws_mem_realloc(allocator, ptr, oldsize, newsize);

  return 0;
}
