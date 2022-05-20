// Source: source/string.c
// Function: aws_secure_strlen

#include <aws/common/string.h>

// int aws_secure_strlen(const char *str, size_t max_read_len, size_t *str_len);

int main() {

  const char *str;
  size_t max_read_len;
  size_t *str_len;

  __CPROVER_assume(__CPROVER_r_ok(str, max_read_len));
  __CPROVER_assume(__CPROVER_w_ok(str_len));

  aws_secure_strlen(str, max_read_len, str_len);

  return 0;
}
