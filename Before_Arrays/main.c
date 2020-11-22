#include <stdio.h>
#include <stdlib.h>

float number1, number2, number3;
float max;

float max3 (float number1, float number2, float number3)
{
    max = number1 > number2 ? (number1 > number3 ? number1 : number3) : number2 < number3 ? number3 : number2 ;
    return max;

}
int main()
{
    while (1)
    {
    printf("Enter three numbers :");
    scanf("%f%f%f" , &number1, &number2, &number3 );
    printf("Biggest number of the entered values: %f \n",max3(number1, number2, number3));

    getch();
    }
}
