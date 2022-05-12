// Source: source/priority_queue.c
// Function: aws_priority_queue_top

#include <aws/common/priority_queue.h>

// int aws_priority_queue_top(
//     const struct aws_priority_queue *queue,
//     void **item);

int main() {

  const struct aws_priority_queue *queue;
  void **item;

  aws_priority_queue_top(queue, item);

  return 0;
}
