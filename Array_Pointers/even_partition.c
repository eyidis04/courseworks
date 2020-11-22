#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void swap (int *pf, int *pe )
{
    int temp = *pe;
    *pe = *pf;
    *pf = temp;
}

int even_partition(int *p, int size)
{
    int *pidx = p;
    int *pfirst = p;
    while(size--){
        if(*p % 2 == 0)
            swap(p, pidx++);
        p++;
    }
    return pidx - pfirst; //value of the first odd element's index
}

int main()
{
    int i;

    int array[SIZE] = {
	1, 320, 552,   3, 989, 899, 604, 291, 279, 513, 800, 137, 857, 908,  71, 929, 272,  10, 643, 674,
	972,  58, 111, 430, 806, 834, 991, 351, 970, 212, 724, 840, 357, 147, 116, 514, 824, 865, 753, 702,
	334, 874, 176, 811, 250, 526, 214,  48, 757, 810, 438, 428, 359,  81,  38, 812, 891, 434, 595, 509,
	176, 530, 665, 179, 188, 739, 272, 513, 492,  68, 211, 490, 810, 171, 682, 983, 343, 560, 179,  89,
	761, 956, 717, 546, 350, 811, 197,  47, 905, 693, 789, 497,  20, 387,  81, 501, 223, 104, 955, 688, };

	//loop for check if all the values are not even
    for(i = 0; i < SIZE; ++i){
        if(array[i] % 2 ){
        printf("%d is the index of the first odd element in array\n",even_partition(array, SIZE));
        printf("The partitioned array: ");
        break;
        }
    }
    //if  i = SIZE - 1 then it means for loop not end without the break and that means all elements are even.
    if(i == SIZE -1)
    printf("All elements of the array are even and those elements are: ");
    for(int i = 0; i < SIZE; ++i){
        printf("%d  ",array[i]);
    }
    return 0;
}
