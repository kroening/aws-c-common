// Source: source/xml_parser.c
// Function: aws_xml_parser_parse

#include <aws/common/xml_parser.h>

// int aws_xml_parser_parse(
//     struct aws_xml_parser *parser,
//     aws_xml_parser_on_node_encountered_fn *on_node_encountered,
//     void *user_data);

int main() {

  struct aws_xml_parser *parser;
  aws_xml_parser_on_node_encountered_fn *on_node_encountered;
  void *user_data;

  __CPROVER_assume(__CPROVER_rw_ok(parser));

  aws_xml_parser_parse(parser, on_node_encountered, user_data);

  return 0;
}
