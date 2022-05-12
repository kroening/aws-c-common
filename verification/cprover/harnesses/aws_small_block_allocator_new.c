// Source: source/allocator_sba.c
// Function: aws_small_block_allocator_new

#include <aws/common/allocator.h>

// struct aws_allocator *aws_small_block_allocator_new(
//     struct aws_allocator *allocator,
//     bool multi_threaded);

int main() {

  struct aws_allocator *allocator;
  bool multi_threaded;

  aws_small_block_allocator_new(allocator, multi_threaded);

  return 0;
}
