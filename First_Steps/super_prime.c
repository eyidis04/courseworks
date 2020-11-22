#include <stdio.h>
#include <math.h>

int super_prime;

int is_prime(int val)
{
    if(val == 0 || val == 1 )
        return 0;
    else if(val == 2 || val ==3 || val == 5 || val ==7 )
        return 1;
    else if (val % 2 == 0)
        return 0;
    else if(val % 3 == 0)
        return 0;
    else if(val % 5 == 0)
        return 0;
    else if(val % 7 == 0)
        return 0;
    else{
        for(int i = 7; i <= sqrt(val); i+=2)
            if(val % i == 0)
                return 0;
    }
        return 1;
}
int is_superprime(int val){
   int index_of_prime = 0;

   for(int i = 0; i <= val ; ++i){
       if(is_prime(i))
           ++index_of_prime;
   }
       if(is_prime(val) && is_prime(index_of_prime))
        return 1;

   return 0;
}

int main()
{
    printf("Enter a number for super prime check: ");
    scanf("%d", &super_prime);

    if(is_superprime(super_prime))
        printf("The number is super prime");
    else
        printf("The number is not super prime");
}
