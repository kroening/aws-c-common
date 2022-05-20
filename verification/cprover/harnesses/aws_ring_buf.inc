bool CPROVER_aws_ring_buffer_is_valid(const struct aws_ring_buffer *ring_buf) {
    return __CPROVER_r_ok(ring_buf) &&
           __CPROVER_rw_ok(ring_buf->allocation, ring_buf->allocation_end - ring_buf->allocation) &&
           (ring_buf->head == ring_buf->allocation && ring_buf->tail == ring_buf->allocation ||
            aws_ring_buffer_check_atomic_ptr(ring_buf, ring_buf->head) &&
                aws_ring_buffer_check_atomic_ptr(ring_buf, ring_buf->tail));
}
