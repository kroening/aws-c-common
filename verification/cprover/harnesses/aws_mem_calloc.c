// Source: source/allocator.c
// Function: aws_mem_calloc

#include <aws/common/allocator.h>

// void *aws_mem_calloc(
//     struct aws_allocator *allocator,
//     size_t num,
//     size_t size);

int main() {

  struct aws_allocator *allocator;
  size_t num;
  size_t size;

  aws_mem_calloc(allocator, num, size);

  return 0;
}
