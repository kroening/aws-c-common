// Source: source/uuid.c
// Function: aws_uuid_to_str

#include <aws/common/uuid.h>

// int aws_uuid_to_str(const struct aws_uuid *uuid, struct aws_byte_buf *output);

int main() {

  const struct aws_uuid *uuid;
  struct aws_byte_buf *output;

  aws_uuid_to_str(uuid, output);

  return 0;
}
