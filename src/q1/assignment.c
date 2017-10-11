#include <stdio.h>

int main(int arg, char* argc[]){
  int a = 0;
  int* b = 0;
  long c = 0;
  double* d = 0;
  char*** e;

  printf("int a =  %d ",sizeof(a));
  printf("int* b =  %d ",sizeof(b));
  printf("long c =  %d ",sizeof(c));
  printf("double* d =  %d ",sizeof(d));
  printf("char*** e =  %d ",sizeof(e));
  return 0;
}
