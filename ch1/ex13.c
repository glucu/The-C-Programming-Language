#include <stdio.h>

#define MAX_WORDS 15

int main()
{
    int freqs[MAX_WORDS];
    for(int i = 0; i != MAX_WORDS; ++i)
    {
        freqs[i] = 0;
    }

    int word_len = 0;
    int word_cnt = 0;
    char ch;
    while((ch = getchar()) != EOF && word_cnt != MAX_WORDS)
    {
        if(ch != ' ' && ch != '\t' && ch != '\n')
        {
            ++word_len;
        }
        else if(word_len > 0)
        {
            freqs[word_cnt++] = word_len;
            word_len = 0;
        }
    }

    printf("\nHorizontal Histogram\n--------------------\n");

    for(int i = 0; i != MAX_WORDS; ++i)
    {
        for(int j = 0; j != freqs[i]; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }
}

