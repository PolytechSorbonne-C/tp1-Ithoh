#include <stdio.h>

int fizzbuzz();

int main(int argc, char const *argv[])
{
    fizzbuzz();
}

int fizzbuzz()
{
    int i;
    i = 1;

    while(i < 101)
    {
        if (((i % 3) == 0 || (i % 10) == 3) && ((i % 7) == 0 || (i % 10) == 7))
            printf("FizzBuzz ");
    
        else if ((i % 3) == 0 || (i % 10) == 3)
            printf("Fizz ");
        
        else if ((i % 7) == 0 || (i % 10) == 7)
            printf("Buzz ");

        else
            printf("%d ",i);
        
        i++;
    }

    return 0;
}