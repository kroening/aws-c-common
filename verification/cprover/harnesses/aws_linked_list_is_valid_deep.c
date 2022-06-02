// Source: source/codegen.c
// Function: aws_linked_list_is_valid_deep

#include <aws/common/linked_list.h>

// bool aws_linked_list_is_valid_deep(const struct aws_linked_list *list);

bool nondet_bool();

int main() {

  const struct aws_linked_list *list;

  // the pointer may be NULL, or is a 'sentinel node' linked list otherwise
  if(list != NULL)
  {
    __CPROVER_assume(__CPROVER_r_ok(list));
    __CPROVER_assume(__CPROVER_is_sentinel_dll(&list->head, &list->tail));
  }

  aws_linked_list_is_valid_deep(list);

  return 0;
}
