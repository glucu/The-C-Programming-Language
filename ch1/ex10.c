#include <stdio.h>

int main() 
{
  int ch = 0;
  while((ch = getchar()) != EOF)
  {
    if(ch == '\t')
    {
      printf("\\t");
    }
    else if(ch == '\b')
    {
      printf("\\b");
    }
    else if(ch == '\\')
    {
      printf("\\\\");
    }
    else 
    {
      printf("%c", ch);
    }
  }
}