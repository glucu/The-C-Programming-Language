#include <stdio.h>

int main()
{
  printf("***Celsius to Fahrenheit conversion***\n\n");

  int lower = 0;
  int upper = 300;
  int step = 20;

  float cel = lower;
  float fah = 0;
  while(cel <= upper)
  {
    fah = cel * (9.0 / 5.0) + 32.0;
    printf("%3.0f\t%6.1f\n", cel, fah);
    cel = cel + step;
  }
}