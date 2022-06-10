// Source: source/xml_parser.c
// Function: s_node_next_sibling

#include <aws/common/xml_parser.h>

#include <aws/common/private/xml_parser_impl.h>

#include "aws_byte_buf.inc"

int s_node_next_sibling(struct aws_xml_parser *parser);

int main() {

  struct aws_xml_parser parser;

  __CPROVER_assume(__CPROVER_r_ok(parser.doc.ptr, parser.doc.len));

  s_node_next_sibling(&parser);

  return 0;
}
