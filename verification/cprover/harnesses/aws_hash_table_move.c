// Source: source/hash_table.c
// Function: aws_hash_table_move

#include <aws/common/hash_table.h>

#include "aws_hash_table.inc"

// void aws_hash_table_move(
//     struct aws_hash_table *AWS_RESTRICT to,
//     struct aws_hash_table *AWS_RESTRICT from);

int main() {

  struct aws_hash_table *to;
  struct aws_hash_table *from;

  __CPROVER_assume(CPROVER_aws_hash_table_is_valid(to));
  __CPROVER_assume(CPROVER_aws_hash_table_is_valid(from));

  aws_hash_table_move(to, from);

  return 0;
}
