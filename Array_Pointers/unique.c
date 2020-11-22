#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define  SIZE 20


int main()
{
	int a[SIZE];

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; ++i) {
		a[i] = rand() % SIZE;
		printf("%d ", a[i]);
	}
	printf("\n");

	for(int i = 0; i < SIZE - 1; ++i){
        int flag = 1;

        for(int k = 1; k < SIZE; ++k){
            if(i != k && a[i] == a[k])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
             printf("%d ", a[i]);
    }

}

