#include <stdio.h>
int main(int argc,char** argv){
    FILE *fp = fopen("test.txt","w");
    fputc(38,fp);
    fclose(fp);
}