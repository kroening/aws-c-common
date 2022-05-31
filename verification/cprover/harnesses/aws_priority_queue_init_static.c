// Source: source/priority_queue.c
// Function: aws_priority_queue_init_static

#include <aws/common/priority_queue.h>

// void aws_priority_queue_init_static(
//     struct aws_priority_queue *queue,
//     void *heap,
//     size_t item_count,
//     size_t item_size,
//     aws_priority_queue_compare_fn *pred);

int nondet_int();

int my_compare_fn(const void *a, const void *b)
{
  return nondet_int();
}

int main() {

  struct aws_priority_queue *queue;
  void *heap;
  size_t item_count;
  size_t item_size;
  aws_priority_queue_compare_fn *pred = my_compare_fn;

  __CPROVER_assume(__CPROVER_rw_ok(queue));

  aws_priority_queue_init_static(queue, heap, item_count, item_size, pred);

  return 0;
}
