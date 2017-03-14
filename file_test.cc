#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
typedef unsigned long long    uint64_t;
uint64_t GetCurrentTimeUS() {
  struct timeval temp;
  gettimeofday(&temp, NULL);
  return temp.tv_sec * 1000000ULL + temp.tv_usec;
}


int main(){
  uint64_t start_time = GetCurrentTimeUS();
  FILE* fp = fopen("/home/work/idata/as/digest/base/detail.dict", "r");
  if (NULL == fp) {
    return -1;
  }
  size_t max_line = 100000000;
  char* buf = NULL;
  size_t buf_len = 0;
  int rc = 0;
  size_t line_no = 1;
  //  buf = (char*)malloc(1024*10);
  for (ssize_t n_read = 0;
       (n_read = getline(&buf, &buf_len, fp)) != -1;
       ++line_no) {
    if (line_no > max_line) {
      printf("line_no>100000");
      assert("max_line error\n");
      break;
    }
    if (buf[n_read-1] == '\r' || buf[n_read-1] == '\n') {
      buf[--n_read] = '\0';
    }
  

}
  uint64_t end_time = GetCurrentTimeUS();
  printf("line_no %d use_time %llu",line_no,end_time-start_time);


}


