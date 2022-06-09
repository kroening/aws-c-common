// Source: source/codegen.c
// Function: aws_array_list_clean_up

#include <aws/common/array_list.h>

// void aws_array_list_clean_up(struct aws_array_list *AWS_RESTRICT list);

bool nondet_bool();

struct aws_array_list zero_list;

int main() {

  struct aws_array_list *list;

  __CPROVER_assume(__CPROVER_rw_ok(list));

  // the list can either be zeroed or have valid pointers
  if(nondet_bool())
  {
    __CPROVER_assume(*list == zero_list);
  }
  else
  {
    list->alloc = aws_default_allocator();
    list->data = malloc(list->current_size);
    //__CPROVER_assume(!__CPROVER_same_object(list, list->data));
    // list->length * list->item_size < list->current_size
  }

  aws_array_list_clean_up(list);

  return 0;
}
