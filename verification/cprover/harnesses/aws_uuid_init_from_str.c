// Source: source/uuid.c
// Function: aws_uuid_init_from_str

#include <aws/common/uuid.h>

// int aws_uuid_init_from_str(
//     struct aws_uuid *uuid,
//     const struct aws_byte_cursor *uuid_str);

int main() {

  struct aws_uuid *uuid;
  const struct aws_byte_cursor *uuid_str;

  __CPROVER_assume(__CPROVER_w_ok(uuid));

  aws_uuid_init_from_str(uuid, uuid_str);

  return 0;
}
