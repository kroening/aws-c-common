// Source: source/allocator_sba.c
// Function: aws_small_block_allocator_bytes_active

#include <aws/common/allocator.h>

// size_t aws_small_block_allocator_bytes_active(struct aws_allocator *sba_allocator);

int main() {

  struct aws_allocator *allocator = aws_default_allocator();
  struct aws_allocator *sba_allocator = aws_small_block_allocator_new(allocator, 0);

  aws_small_block_allocator_bytes_active(sba_allocator);

  return 0;
}
