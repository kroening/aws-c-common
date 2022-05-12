// Source: source/hash_table.c
// Function: aws_hash_table_move

#include <aws/common/hash_table.h>

// void aws_hash_table_move(
//     struct aws_hash_table *AWS_RESTRICT to,
//     struct aws_hash_table *AWS_RESTRICT from);

int main() {

  struct aws_hash_table *to;
  struct aws_hash_table *from;

  void aws_hash_table_move(to, from);

  return 0;
}
