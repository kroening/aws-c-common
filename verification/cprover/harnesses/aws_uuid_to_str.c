// Source: source/uuid.c
// Function: aws_uuid_to_str

#include <aws/common/uuid.h>
#include <aws/common/byte_buf.h>

#include "aws_byte_buf.inc"

// int aws_uuid_to_str(const struct aws_uuid *uuid, struct aws_byte_buf *output);

int main() {

  const struct aws_uuid *uuid;
  struct aws_byte_buf *output;

  __CPROVER_assume(__CPROVER_r_ok(uuid));
  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(output));

  aws_uuid_to_str(uuid, output);

  return 0;
}
