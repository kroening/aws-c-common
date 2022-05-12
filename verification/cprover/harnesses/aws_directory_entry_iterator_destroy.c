// Source: source/file.c
// Function: aws_directory_entry_iterator_destroy

#include <aws/common/file.h>

// void aws_directory_entry_iterator_destroy(struct aws_directory_iterator *iterator);

int main() {

  struct aws_directory_iterator *iterator;

  aws_directory_entry_iterator_destroy(iterator);

  return 0;
}
