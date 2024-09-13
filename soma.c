#include <stdio.h>

int main()
{
  int i = 12, soma = 0, k = 1;
  while (k < i)
  {
    k++;
    soma += k;
    printf("%d\n", soma);
  }

  return 0;
}

// SOMA SERÁ IGUAL A 77
// 2
// 5
// 9
// 14
// 20
// 27
// 35
// 44
// 54
// 65
// 77