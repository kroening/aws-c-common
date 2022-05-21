// Source: source/allocator.c
// Function: aws_mem_realloc

#include <aws/common/allocator.h>

// int aws_mem_realloc(
//     struct aws_allocator *allocator,
//     void **ptr,
//     size_t oldsize,
//     size_t newsize);

int main() {

  struct aws_allocator *allocator = aws_default_allocator();
  size_t oldsize;
  size_t newsize;

  void *ptr;
  __CPROVER_assume(__CPROVER_DYNAMIC_OBJECT(ptr));
  __CPROVER_assume(__CPROVER_LIVE_OBJECT(ptr));
  __CPROVER_assume(__CPROVER_POINTER_OFFSET(ptr) == 0);

  aws_mem_realloc(allocator, &ptr, oldsize, newsize);

  return 0;
}
