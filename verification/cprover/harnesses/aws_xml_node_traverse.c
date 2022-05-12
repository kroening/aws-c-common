// Source: source/xml_parser.c
// Function: aws_xml_node_traverse

#include <aws/common/xml_parser.h>

// int aws_xml_node_traverse(
//     struct aws_xml_parser *parser,
//     struct aws_xml_node *node,
//     aws_xml_parser_on_node_encountered_fn *on_node_encountered,
//     void *user_data);

int main() {

  struct aws_xml_parser *parser;
  struct aws_xml_node *node;
  aws_xml_parser_on_node_encountered_fn *on_node_encountered;
  void *user_data;

  aws_xml_node_traverse(parser, node, on_node_encountered, user_data);

  return 0;
}
