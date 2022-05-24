// Source: source/command_line_parser.c
// Function: aws_cli_dispatch_on_subcommand

#include <aws/common/command_line_parser.h>

// int aws_cli_dispatch_on_subcommand(
//     int argc,
//     char *const argv[],
//     struct aws_cli_subcommand_dispatch *dispatch_table,
//     int table_length,
//     void *user_data);

int main() {

  int argc;
  char **argv;
  int table_length;
  struct aws_cli_subcommand_dispatch *dispatch_table;
  void *user_data;

  __CPROVER_assume(argc >= 0);
  __CPROVER_assume(__CPROVER_r_ok(argv, sizeof(char *)*argc));
  __CPROVER_assume(table_length >= 0);
  __CPROVER_assume(__CPROVER_r_ok(dispatch_table, sizeof(*dispatch_table)*table_length));

  aws_cli_dispatch_on_subcommand(argc, argv, dispatch_table, table_length, user_data);

  return 0;
}
