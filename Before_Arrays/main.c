#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

void hardy_ramanujan()
{
    int count;
    int which_hardy = 0;
    for(int i = 1; i < MAX; ++i)
    {
        count = 0;
        for(j = 1; j * j * j < i; ++j)
        {
            for(k = j + 1 ; (j * j * j) + (k * k * k) <= i ; ++k)
            {
                if((j * j * j) + (k * k * k) == i)
                    ++count;
            }
        }
        if(count == 2)
        {
            ++which_hardy;
            printf("%2d.  %-5d\n", which_hardy, i);
        }
    }

}
int main()
{
    hardy_ramanujan();
}
