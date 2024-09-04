#include <stdio.h>

#define LOWER 0
#define UPPER 300 

float fah_to_cel(float fah)
{
    return (5.0 / 9.0) * (fah - 32.0);
} 

int main()
{
  printf("***Fahrenheit to Celsius conversion***\n\n");

  int lower = LOWER;
  int upper = UPPER;
  int step = 20;

  float fah = lower;
  while(fah <= upper)
  {
    float cel = fah_to_cel(fah);
    printf("%3.0f\t%6.2f\n", fah, cel);
    fah = fah + step;
  }
}
