#include <stdio.h>

// global variable
int y = 1;

int inner()
{
  int a = 1;
  printf("address a is: %p\n",&a);
}
        

int main()
{
  int x = 4;
  // this will show what direction stack assigns memory
  int z = 5;

  printf("address y is: %p\n",&y);
  printf("address x is: %p\n",&x);
  printf("address z is: %p\n",&z);

  inner();
}

