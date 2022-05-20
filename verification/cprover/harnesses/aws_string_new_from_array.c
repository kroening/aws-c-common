// Source: source/string.c
// Function: aws_string_new_from_array

#include <aws/common/string.h>

// struct aws_string *aws_string_new_from_array(
//     struct aws_allocator *allocator,
//     const uint8_t *bytes,
//     size_t len);

int main() {

  struct aws_allocator *allocator = aws_default_allocator();
  const uint8_t *bytes;
  size_t len;

  __CPROVER_assume(__CPROVER_r_ok(bytes, len));

  aws_string_new_from_array(allocator, bytes, len);

  return 0;
}
