// Source: source/codegen.c
// Function: aws_text_detect_encoding

#include <aws/common/linked_list.h>

// enum aws_text_encoding aws_text_detect_encoding(
//     const uint8_t *bytes,
//     size_t size);

int main() {

  const uint8_t *bytes;
  size_t size;

  aws_text_detect_encoding(bytes, size);

  return 0;
}
