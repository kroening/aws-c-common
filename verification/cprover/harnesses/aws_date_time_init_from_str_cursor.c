// Source: source/date_time.c
// Function: aws_date_time_init_from_str_cursor

#include <aws/common/byte_buf.h>
#include <aws/common/date_time.h>

#include "aws_byte_buf.inc"

// int aws_date_time_init_from_str_cursor(
//     struct aws_date_time *dt,
//     const struct aws_byte_cursor *date_str_cursor,
//     enum aws_date_format fmt);

int main() {

  struct aws_date_time *dt;
  const struct aws_byte_cursor *date_str_cursor;
  enum aws_date_format fmt;

  __CPROVER_assume(__CPROVER_r_ok(dt));
  __CPROVER_assume(CPROVER_aws_byte_cursor_is_valid(date_str_cursor));

  aws_date_time_init_from_str_cursor(dt, date_str_cursor, fmt);

  return 0;
}
