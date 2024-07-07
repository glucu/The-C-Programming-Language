
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  printf("Celsius to Fahrenheit Table:\n");

  float celsius = LOWER;
  float fahr;
  while(celsius <= UPPER) {
    fahr = (celsius * 1.8) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + 20;
  }

}