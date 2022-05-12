// Source: source/date_time.c
// Function: s_get_time_struct

#include <aws/common/date_time.h>

struct tm s_get_time_struct(struct aws_date_time *dt, bool local_time);

int main() {

  struct aws_date_time *dt;
  bool local_time;

  s_get_time_struct(dt, local_time);

  return 0;
}
