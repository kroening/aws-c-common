// Source: source/codegen.c
// Function: aws_array_list_init_dynamic

#include <aws/common/array_list.h>

// int aws_array_list_init_dynamic(
//     struct aws_array_list *AWS_RESTRICT list,
//     struct aws_allocator *alloc,
//     size_t initial_item_allocation,
//     size_t item_size);

int main() {

  struct aws_array_list *AWS_RESTRICT list;
  struct aws_allocator *alloc;
  size_t initial_item_allocation;
  size_t item_size;

  aws_array_list_init_dynamic(list, alloc, initial_item_allocation, item_size);

  return 0;
}
