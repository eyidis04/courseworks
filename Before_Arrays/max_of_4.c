#include <stdio.h>
#include <stdlib.h>

int number1, number2, number3, number4;

int max4(int a, int b, int c, int d)
{
   return  a > b && a > c &&  a > d ? a :  b > a && b > c && b > d? b : c > a && c > b && c > d ? c : d ;
}

int main()
{
    while (1)   {
      
    printf("Enter four number: \n");
    scanf("%d%d%d%d", &number1, &number2, &number3, &number4);
    printf("max of four: %d \n", max4 (number1, number2, number3, number4));
    }
}

