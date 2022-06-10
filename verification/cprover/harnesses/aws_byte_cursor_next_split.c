// Source: source/byte_buf.c
// Function: aws_byte_cursor_next_split

#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// bool aws_byte_cursor_next_split(
//     const struct aws_byte_cursor *AWS_RESTRICT input_str,
//     char split_on,
//     struct aws_byte_cursor *AWS_RESTRICT substr);

bool nondet_bool();

int main() {

  const struct aws_byte_cursor *input_str;
  char split_on;
  struct aws_byte_cursor substr;

  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(input_str));

  // The function calls memchr on input->ptr unconditionally,
  // which thus must be valid even when input->len is zero.
  __CPROVER_assume(__CPROVER_r_ok(input_str->ptr, input_str->len));

  // The cursor must be zeroed or point into the input_str
  if(nondet_bool())
  {
    substr.ptr = 0;
    substr.len = 0;
  }
  else
  {
    __CPROVER_size_t offset_start, offset_end;
    __CPROVER_assume(offset_end <= input_str->len);
    __CPROVER_assume(offset_start <= offset_end);
    substr.ptr = input_str->ptr + offset_start;
    substr.len = offset_end - offset_start;
  }

  aws_byte_cursor_next_split(input_str, split_on, &substr);

  return 0;
}
