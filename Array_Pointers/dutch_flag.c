#include <stdio.h>
#include <stdlib.h>

#define SIZE 25
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void dutch_flag(int  *pa, int size)
{
    int *pidx = pa;

    for(int i = 0; i < size; ++i){
        if(!pa[i])
        {
            swap(pa + i, pidx++);
        }
    }
    for(int i = 0; i < size; ++i){
        if(pa[i] == 1)
        {
            swap(pa + i, pidx++);
        }
    }

}

int main()
{
    int dest [SIZE] = {1, 2, 2, 0, 1, 1, 1, 2, 2, 0, 2, 0, 1, 2,0, 2, 0, 1, 2, 0, 1};
    dutch_flag(dest,SIZE);
    for (int i = 0; i < SIZE; ++i)
        printf("%d  ",dest[i] );
    return 0;
}
