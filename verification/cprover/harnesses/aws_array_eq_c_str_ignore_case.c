// Source: source/byte_buf.c
// Function: aws_array_eq_c_str_ignore_case

#include <aws/common/byte_buf.h>

// bool aws_array_eq_c_str_ignore_case(
//     const void *const array,
//     const size_t array_len,
//     const char *const c_str);

int main() {

  const void *const array;
  const size_t array_len;
  const char *const c_str;

  aws_array_eq_c_str_ignore_case(array, array_len, c_str);

  return 0;
}
