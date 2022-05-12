// Source: source/byte_buf.c
// Function: aws_hash_array_ignore_case

#include <aws/common/byte_buf.h>

// uint64_t aws_hash_array_ignore_case(const void *array, const size_t len);

int main() {

  const void *array;
  const size_t len;

  aws_hash_array_ignore_case(array, len);

  return 0;
}
