#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * assign a random number to the variable n each time it is executed
 * print the last digit of the number stored in the variable n.
 *
 * return : always 0
 */
int main(void)

{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

    printf("last digit %d is" ,n);
if (n > 5)
{  
    printf("greater than 5");
}
if (n ==0)
{    
    printf("0");
}
if (n < 0 && n !=0)
{   
    printf("less than 6 not 0");
}
    printf("\n");

return (0);

}


