// Source: source/codegen.c
// Function: aws_text_detect_encoding

#include <aws/common/encoding.h>

// enum aws_text_encoding aws_text_detect_encoding(
//     const uint8_t *bytes,
//     size_t size);

int main() {

  const uint8_t *bytes;
  size_t size;

  __CPROVER_assume(__CPROVER_r_ok(bytes, size));

  aws_text_detect_encoding(bytes, size);

  return 0;
}
