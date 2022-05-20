// Source: source/codegen.c
// Function: aws_is_mem_zeroed

#include <aws/common/zero.h>

// bool aws_is_mem_zeroed(const void *buf, size_t bufsize);

int main() {

  const void *buf;
  size_t bufsize;

  __CPROVER_assume(__CPROVER_r_ok(buf, bufsize));
  
  aws_is_mem_zeroed(buf, bufsize);

  return 0;
}
