#include <stdio.h>

int main()
{
  int curr = 0;
  int prev = 0;
  while((curr = getchar()) != EOF) {
    if(curr != ' ' || prev == ' ') {
      putchar(curr);
    }
    prev = curr;
  }
}