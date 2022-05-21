bool CPROVER_aws_string_is_valid(const struct aws_string *src) {
    return __CPROVER_rw_ok(src) && __CPROVER_r_ok(&(src->bytes), src->len);
}
