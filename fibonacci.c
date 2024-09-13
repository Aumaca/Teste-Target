#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  int c = 0;

  while (b < 2000)
  {
    printf("%d\n", a);
    c = a + b;
    b = a;
    a = c;
  }

  return 0;
}