bool CPROVER_aws_byte_buf_is_valid(const struct aws_byte_buf *src) {
    return __CPROVER_rw_ok(src) &&
           (src->capacity == 0 ? src->len == 0 && src->buffer == NULL
                               : src->len <= src->capacity && __CPROVER_rw_ok(src->buffer, src->capacity));
}

bool CPROVER_aws_byte_cursor_is_valid(const struct aws_byte_cursor *cursor) {
    return __CPROVER_r_ok(cursor) &&
           ((cursor->len == 0) || (cursor->len > 0 && __CPROVER_r_ok(cursor->ptr, cursor->len)));
}
