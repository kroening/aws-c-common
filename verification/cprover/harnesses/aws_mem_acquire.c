// Source: source/allocator.c
// Function: aws_mem_acquire

#include <aws/common/allocator.h>

// void *aws_mem_acquire(struct aws_allocator *allocator, size_t size);

int main() {

  struct aws_allocator *allocator = aws_default_allocator();
  size_t size;
  
  aws_mem_acquire(allocator, size);

  return 0;
}
