// Source: source/logging.c
// Function: aws_thread_id_t_to_string

#include <aws/common/logging.h>

// int aws_thread_id_t_to_string(
//     aws_thread_id_t thread_id,
//     char *buffer,
//     size_t bufsz);

int main() {

  aws_thread_id_t thread_id;
  char *buffer;
  size_t bufsz;

  aws_thread_id_t_to_string(thread_id, buffer, bufsz);

  return 0;
}
