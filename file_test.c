#include <stdio.h>
#include <unistd.h>
int main(int argc,char** argv){
    FILE *fp = fopen("test.txt","w");
    fputs("hello world",fp);
    fclose(fp);
}