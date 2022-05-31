// Source: source/bus.c
// Function: s_bus_destroy_listener_list

#include <aws/common/bus.h>

void s_bus_destroy_listener_list(void *data);

int main() {

  struct listener_list *data;

  s_bus_destroy_listener_list(data);

  return 0;
}
