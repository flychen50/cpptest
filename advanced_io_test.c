#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv) {
  long page_size = sysconf(_SC_PAGESIZE);
  printf("%ld", page_size);
}
