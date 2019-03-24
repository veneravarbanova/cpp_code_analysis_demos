#include <stdio.h>

void f()
{
    char *p;
    *p = 0; // valgrind memcheck: Use of uninitialised value of size 8 
}

void f2()
{
  int v;
  if (v > 0) {
    printf("hello world positive\n");
  } else {
    printf("hello world negative\n");
  }
  
}

int main()
{
  f2();
  f();
  return 0;
}
