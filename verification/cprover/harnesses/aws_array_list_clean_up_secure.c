// Source: source/codegen.c
// Function: aws_array_list_clean_up_secure

#include <aws/common/array_list.h>

// void aws_array_list_clean_up_secure(struct aws_array_list *AWS_RESTRICT list);

struct aws_array_list zero_list;

int main() {

  struct aws_array_list *list;

  // the list can either be zeroed or have valid pointers
  if(nondet_bool())
  {
    __CPROVER_assume(*list == zero_list);
  }
  else
  {
    __CPROVER_assume(list->alloc == aws_default_allocator());
    __CPROVER_assume(__CPROVER_rw_ok(list->data, list->current_size));
    // list->length * list->item_size < list->current_size
  }

  aws_array_list_clean_up_secure(list);

  return 0;
}
