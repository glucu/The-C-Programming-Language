#include <stdio.h>

#define ALPHA 26
#define NUM 10
#define MAX_LENGTH (ALPHA + NUM)

int main()
{
    int freqs[MAX_LENGTH];
    for(int i = 0; i != MAX_LENGTH; ++i)
    {
        freqs[i] = 0;
    }

    for(int ch; (ch = getchar()) != EOF;)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ++freqs[ch - 'a'];
        }
        if(ch >= '0' && ch <= '9')
        {
            ++freqs[ALPHA + (ch - '0')];
        }
    }

    for(int i = 0; i != MAX_LENGTH; ++i)
    {
        if(i < ALPHA)
        {
            printf("C: %c ", i + 'a');
        }
        else if(i >= ALPHA)
        {
            printf("N: %c ", '0' + i - ALPHA);
        }

        for(int j = 0; j != freqs[i]; ++j)
        {
            printf("*");
        }
        putchar('\n');
    }
}

