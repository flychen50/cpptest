#include <stdio.h>
#include <error.h>
int main(void)
{
  FILE* f = fopen("non_existent", "r");
 if (f == NULL) {
    perror("open()");
  } else {
    fclose(f);
  }
  printf("%d",errno);

}
