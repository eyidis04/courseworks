#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

unsigned long long collatz_number;

unsigned int display_collatz(unsigned long long val)
{
    int collatz_count = 1;

    printf("%5d  ", val);
    while(val != 1)
    {
       val = val % 2 == 0 ? val / 2 : val * 3 + 1;
       printf("%5d  ", val);
       ++collatz_count;
    }
    return collatz_count;
}

int main()
{
    printf("Enter an integer number: ");
    scanf("%I64u", &collatz_number);
    printf("\n\nAbove are %u terms created for integer %I64u", display_collatz(collatz_number), collatz_number);
    getch();
}
