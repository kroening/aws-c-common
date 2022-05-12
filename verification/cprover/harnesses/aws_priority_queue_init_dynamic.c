// Source: source/priority_queue.c
// Function: aws_priority_queue_init_dynamic

#include <aws/common/priority_queue.h>

// int aws_priority_queue_init_dynamic(
//     struct aws_priority_queue *queue,
//     struct aws_allocator *alloc,
//     size_t default_size,
//     size_t item_size,
//     aws_priority_queue_compare_fn *pred);

int main() {

  struct aws_priority_queue *queue;
  struct aws_allocator *alloc;
  size_t default_size;
  size_t item_size;
  aws_priority_queue_compare_fn *pred;

  aws_priority_queue_init_dynamic(queue, alloc, default_size, item_size, pred);

  return 0;
}
