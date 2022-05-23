// Source: source/ring_buffer.c
// Function: aws_ring_buffer_clean_up

#include <aws/common/ring_buffer.h>

#include "aws_ring_buf.inc"

// void aws_ring_buffer_clean_up(struct aws_ring_buffer *ring_buf);

int main() {

  struct aws_ring_buffer *ring_buf;

  __CPROVER_assume(CPROVER_aws_ring_buffer_is_valid(ring_buf));

  aws_ring_buffer_clean_up(ring_buf);

  return 0;
}
