#include <stdio.h>

int main()
{
  long bc = 0;
  long tc = 0;
  long nc = 0;
  long ch = 0;
  while((ch = getchar()) != EOF)
  {
    if(ch == ' ')
    {
      ++bc;
    }
    if(ch == '\t')
    {
      ++tc;
    }
    if(ch == '\n')
    {
      ++nc;
    }
  }
  printf("Blanks: %ld\nTabs: %ld\nNewlines: %ld\n", bc, tc, nc);
}