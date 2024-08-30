#include <stdio.h>

int main()
{
  char c;
  int is_word = 0;
  while((c = getchar()) != EOF) 
  {
    if(c != ' ' && c != '\t' && c != '\n') 
    {
      printf("%c", c);
      is_word = 1;
    }
    else 
    {
      if(is_word) 
        printf("\n");
      is_word = 0;
    }
  }
}
