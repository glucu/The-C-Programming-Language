#include <stdio.h>

int main()
{
  printf("***Fahrenheit to Celsius conversion***\n\n");

  int lower = 0;
  int upper = 300;
  int step = 20;

  float fah = lower;
  float cel = 0;
  while(fah <= upper)
  {
    cel = (5.0 / 9.0) * (fah - 32.0);
    printf("%3.0f\t%6.1f\n", fah, cel);
    fah = fah + step;
  }
}