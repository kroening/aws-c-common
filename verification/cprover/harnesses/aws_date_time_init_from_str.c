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

  aws_date_time_init_from_str(dt, date_str, fmt);

  return 0;
}
