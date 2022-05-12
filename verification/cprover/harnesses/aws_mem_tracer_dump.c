// Source: source/memtrace.c
// Function: aws_mem_tracer_dump

#include <aws/common/allocator.h>

// void aws_mem_tracer_dump(struct aws_allocator *trace_allocator);

int main() {

  struct aws_allocator *trace_allocator;

  aws_mem_tracer_dump(trace_allocator);

  return 0;
}
