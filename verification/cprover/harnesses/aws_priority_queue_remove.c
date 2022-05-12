// Source: source/priority_queue.c
// Function: aws_priority_queue_remove

#include <aws/common/priority_queue.h>

// int aws_priority_queue_remove(
//     struct aws_priority_queue *queue,
//     void *item,
//     const struct aws_priority_queue_node *node);

int main() {

  struct aws_priority_queue *queue;
  void *item;
  const struct aws_priority_queue_node *node;

  aws_priority_queue_remove(queue, item, node);

  return 0;
}
