// Source: source/priority_queue.c
// Function: aws_priority_queue_backpointers_valid_deep

#include <aws/common/priority_queue.h>

// bool aws_priority_queue_backpointers_valid_deep(
//     const struct aws_priority_queue *const queue);

int main() {

  const struct aws_priority_queue *const queue;

  aws_priority_queue_backpointers_valid_deep(queue);

  return 0;
}
