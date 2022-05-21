bool CPROVER_aws_hash_table_is_valid(const struct aws_hash_table *src)
{
  return __CPROVER_rw_ok(src);
}

bool CPROVER_aws_hash_element_is_valid(const struct aws_hash_element *src)
{
  return __CPROVER_rw_ok(src);
}
