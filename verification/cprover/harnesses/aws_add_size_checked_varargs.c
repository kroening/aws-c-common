// Source: source/math.c
// Function: aws_add_size_checked_varargs

#include <aws/common/math.h>

// int aws_add_size_checked_varargs(size_t num, size_t *r, ...);

int main() {

  size_t num;
  size_t *r;

  aws_add_size_checked_varargs(num, r);

  return 0;
}
