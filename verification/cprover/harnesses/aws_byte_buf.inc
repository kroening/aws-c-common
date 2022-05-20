bool CPROVER_aws_byte_buf_is_valid(const struct aws_byte_buf *src) {
    return __CPROVER_r_ok(src) &&
           (src->capacity == 0 ? src->len == 0 && src->buffer == NULL
                               : src->len <= src->capacity && __CPROVER_rw_ok(src->buffer, src->capacity));
}

bool CPROVER_aws_ring_buffer_is_valid(const struct aws_ring_buffer *ring_buf) {
    return __CPROVER_r_ok(ring_buf) &&
           __CPROVER_rw_ok(ring_buf->allocation, ring_buf->allocation_end - ring_buf->allocation) &&
           (head == ring_buf->allocation && tail == ring_buf->allocation ||
            aws_ring_buffer_check_atomic_ptr(ring_buf, ring_buf->head) &&
                aws_ring_buffer_check_atomic_ptr(ring_buf, ring_buf->tail));
}
