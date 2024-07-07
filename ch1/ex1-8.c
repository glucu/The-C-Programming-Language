#include <stdio.h>

int main()
{
  int sc = 0;
  int tc = 0;
  int nlc = 0;

  for(char c; (c = getchar()) != EOF;) {
    if(c == ' ') 
      ++sc;
    else if(c == '\t')
      ++tc;
    else if(c == '\n')
      ++nlc;
  }

  printf("space count: %d\ntab count: %d\nnewline count: %d\n", sc, tc, nlc);
}