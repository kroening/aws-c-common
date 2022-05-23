bool CPROVER_aws_ring_buffer_is_valid(const struct aws_ring_buffer *ring_buf) {
    const uint8_t *head = aws_atomic_load_ptr_explicit(&ring_buf->head, aws_memory_order_acquire);
    const uint8_t *tail = aws_atomic_load_ptr_explicit(&ring_buf->tail, aws_memory_order_acquire);

    return __CPROVER_rw_ok(ring_buf) &&
           __CPROVER_rw_ok(ring_buf->allocation, ring_buf->allocation_end - ring_buf->allocation) &&
           (head == ring_buf->allocation && tail == ring_buf->allocation ||
            aws_ring_buffer_check_atomic_ptr(ring_buf, head) && aws_ring_buffer_check_atomic_ptr(ring_buf, tail));
}
