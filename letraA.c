#include <stdio.h>

int getAmountLetter(char *string)
{
  int amount = 0;
  while (*string != '\0')
  {
    if (*string == 'a' || *string == 'A')
      amount++;
    string++;
  }
  return amount;
}

int main()
{
  printf("LETTER: %d\n", getAmountLetter("Letter"));
  printf("Programming: %d\n", getAmountLetter("Programming"));
  printf("Motherboard: %d\n", getAmountLetter("MotherboArd"));
  printf("CASCATA: %d\n", getAmountLetter("CASCATA"));

  return 0;
}