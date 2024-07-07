#include <stdio.h>

int main()
{
  for(int ch; (ch = getchar()) != EOF;) {
    if(ch == '\t') {
    printf("\\t");
    }
    else if(ch == '\b') {
      printf("\\b");
    }
    else if(ch == '\\') {
      printf("\\");
      printf("\\");
    }
  }
}


