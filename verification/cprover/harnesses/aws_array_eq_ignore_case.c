// Source: source/byte_buf.c
// Function: aws_array_eq_ignore_case

#include <aws/common/byte_buf.h>

// bool aws_array_eq_ignore_case(
//     const void *const array_a,
//     const size_t len_a,
//     const void *const array_b,
//     const size_t len_b);

int main() {

  const void *const array_a;
  const size_t len_a;
  const void *const array_b;
  const size_t len_b;

  aws_array_eq_ignore_case(array_a, len_a, array_b, len_b);

  return 0;
}
