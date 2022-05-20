// Source: source/byte_buf.c
// Function: aws_byte_cursor_right_trim_pred

#include <aws/common/byte_buf.h>

// struct aws_byte_cursor aws_byte_cursor_right_trim_pred(
//     const struct aws_byte_cursor *source,
//     aws_byte_predicate_fn *predicate);

int main() {

  const struct aws_byte_cursor *source;
  aws_byte_predicate_fn *predicate;

  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(source));

  aws_byte_cursor_right_trim_pred(source, predicate);

  return 0;
}
