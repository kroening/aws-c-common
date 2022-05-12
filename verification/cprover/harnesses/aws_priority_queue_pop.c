// Source: source/priority_queue.c
// Function: aws_priority_queue_pop

#include <aws/common/priority_queue.h>

// int aws_priority_queue_pop(
//     struct aws_priority_queue *queue,
//     void *item);

int main() {

  struct aws_priority_queue *queue;
  void *item;

  aws_priority_queue_pop(queue, item);

  return 0;
}
