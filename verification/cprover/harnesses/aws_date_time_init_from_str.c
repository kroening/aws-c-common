// Source: source/date_time.c
// Function: aws_date_time_init_from_str

#include <aws/common/date_time.h>

// int aws_date_time_init_from_str(
//     struct aws_date_time *dt,
//     const struct aws_byte_buf *date_str,
//     enum aws_date_format fmt);

int main() {

  struct aws_date_time *dt;
  const struct aws_byte_buf *date_str;
  enum aws_date_format fmt;

  __CPROVER_assume(__CPROVER_rw_ok(dt));
  __CPROVER_assume(CPROVER_aws_byte_buf_is_valid(date_str));

  aws_date_time_init_from_str(dt, date_str, fmt);

  return 0;
}
