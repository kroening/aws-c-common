// Source: source/memtrace.c
// Function: aws_mem_tracer_new

#include <aws/common/allocator.h>

// struct aws_allocator *aws_mem_tracer_new(
//     struct aws_allocator *allocator,
//     struct aws_allocator *deprecated,
//     enum aws_mem_trace_level level,
//     size_t frames_per_stack);

int main() {

  struct aws_allocator *allocator;
  struct aws_allocator *deprecated;
  enum aws_mem_trace_level level;
  size_t frames_per_stack;

  aws_mem_tracer_new(allocator, deprecated, level, frames_per_stack);

  return 0;
}
