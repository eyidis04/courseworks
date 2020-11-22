#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int number1, number2;

int are_friends(int number1, int number2)
{
    int sum_number1_divisors = 0;
    int sum_number2_divisors = 0;

    for(int i = 1; i <= number1 / 2 ; ++i)

        sum_number1_divisors += number1 % i == 0 ? i : 0;

    for(int i = 1; i <= number2 / 2 ; ++i)

        sum_number2_divisors += number2 % i == 0 ? i : 0;

    return sum_number1_divisors == number2 && sum_number2_divisors == number1 ? 1 : 0;
}

int main()
{
    printf("Enter two numbers:\n");
    scanf("%d%d",&number1, &number2 );
    are_friends(number1, number2) ? printf("They are friend numbers") : printf("They are not friend numbers");
    getch();
    return 0;
}
