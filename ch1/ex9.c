#include <stdio.h>

int main() 
{
  int is_space = 0;
  int ch = 0;
  while((ch = getchar()) != EOF) 
  {
    if(ch == ' ' || ch == '\t') 
    {
      if(!is_space) 
      {
        putchar(' ');
        is_space = 1;
      }
    } 
    else 
    {
      putchar(ch);
      is_space = 0;
    }
  }
}
