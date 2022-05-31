// Source: source/byte_buf.c
// Function: aws_byte_cursor_left_trim_pred

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// struct aws_byte_cursor aws_byte_cursor_left_trim_pred(
//      const struct aws_byte_cursor *source,
//      aws_byte_predicate_fn *predicate);

bool nondet_bool();

bool my_predicate(uint8_t)
{
  return nondet_bool();
}

int main() {

  const struct aws_byte_cursor *source;
  aws_byte_predicate_fn *predicate = my_predicate;

  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(source));

  aws_byte_cursor_left_trim_pred(source, predicate);

  return 0;
}
