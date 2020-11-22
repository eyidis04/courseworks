#include <stdio.h>
#include <stdlib.h>

int sum_array(int const *pa, int size)
{
    int sum = 0;

    while(size--){
        sum += *pa;
        ++pa;
    }
    return sum;
}
double get_mean(int const *pa, int size)
{
    int mean = 0;
    mean += (double)sum_array (pa, size) / size;

    return mean;
}
int main()
{
    int array[10] = { 25, 2, 23, 75, 19, 53, 20, 14, 57, 12,};
    printf("mean: %d ",get_mean(array, 10));
}
