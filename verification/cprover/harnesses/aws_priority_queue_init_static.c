// Source: source/priority_queue.c
// Function: aws_priority_queue_init_static

#include <aws/common/priority_queue.h>

// void aws_priority_queue_init_static(
//     struct aws_priority_queue *queue,
//     void *heap,
//     size_t item_count,
//     size_t item_size,
//     aws_priority_queue_compare_fn *pred);

int main() {

  struct aws_priority_queue *queue;
  void *heap;
  size_t item_count;
  size_t item_size;
  aws_priority_queue_compare_fn *pred;

  aws_priority_queue_init_static(queue, heap, item_count, item_size, pred);

  return 0;
}
