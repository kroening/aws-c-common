// Source: source/xml_parser.c
// Function: s_advance_to_closing_tag

#include <aws/common/xml_parser.h>

int s_advance_to_closing_tag(
    struct aws_xml_parser *parser,
    struct aws_xml_node *node,
    struct aws_byte_cursor *out_body);

int main() {

  struct aws_xml_parser *parser;
  struct aws_xml_node *node;
  struct aws_byte_cursor *out_body;

  s_advance_to_closing_tag(parser, node, out_body);

  return 0;
}
