// Source: source/codegen.c
// Function: aws_linked_list_node_reset

#include <aws/common/linked_list.h>

// void aws_linked_list_node_reset(struct aws_linked_list_node *node);

int main() {

  struct aws_linked_list_node *node;

  aws_linked_list_node_reset(node);

  return 0;
}