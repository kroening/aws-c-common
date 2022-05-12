// Source: source/codegen.c
// Function: aws_array_list_clean_up

#include <aws/common/array_list.h>

// void aws_array_list_clean_up(struct aws_array_list *AWS_RESTRICT list);

int main() {

  struct aws_array_list *AWS_RESTRICT list;

  aws_array_list_clean_up(list);

  return 0;
}
