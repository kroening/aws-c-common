bool aws_byte_buf_is_valid(const struct aws_byte_buf *src)
{
  if(!__CPROVER_r_ok(src))
    return false;

  if(src->capacity == 0)
    return src->len == 0 && src->buffer == NULL;
  else
    return src->len <= src->capacity && __CPROVER_rw_ok(src->buffer, src->capacity);
}
