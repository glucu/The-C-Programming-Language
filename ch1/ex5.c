#include <stdio.h>

int main()
{
  for(float fah = 300; fah >= 0; fah = fah - 20)
  {
    printf("%3.0f\t%6.1f\n", fah, (5.0 / 9.0) * (fah - 32.0));
  }
}