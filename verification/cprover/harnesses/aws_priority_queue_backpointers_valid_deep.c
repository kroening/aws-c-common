// Source: source/priority_queue.c
// Function: aws_priority_queue_backpointers_valid_deep

#include <aws/common/priority_queue.h>

// bool aws_priority_queue_backpointers_valid_deep(
//     const struct aws_priority_queue *const queue);

bool nondet_bool();

int main() {

  const struct aws_priority_queue *const queue;

  // queue may be null
  if(nondet_bool())
  {
    __CPROVER_assume(queue == 0);
  }
  else
  {
    __CPROVER_assume(__CPROVER_r_ok(queue));
    // now need to ensure
    // aws_priority_queue_backpointer_index_valid(queue, i)
    // for i from 0 to queue->backpointers.length-1
    __CPROVER_assume(__CPROVER_r_ok(
      queue->backpointers.data,
      queue->backpointers.length * sizeof(struct aws_priority_queue_node)));
  }

  aws_priority_queue_backpointers_valid_deep(queue);

  return 0;
}
