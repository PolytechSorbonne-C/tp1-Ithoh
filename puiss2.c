#include <stdio.h>
#include <stdlib.h>

int puissance2(int,int);

int main(int argc, char const *argv[])
{
    int a,b;

    printf("Donnez moi un nombre :");
    scanf("%d",&a);
    printf("Donnez moi une puissance :");
    scanf("%d",&b);
    
    puissance2(a,b);
}

int puissance2(int x, int k)
{
    int temp;
    int temp2;

    temp = x;
    temp2 = x;
    printf("k est egal : %d\n", k);
    printf("temp est egal : %d\n\n",temp);
    while (k > 1)
    {
        if (k % 2 == 0)
        {
            printf("k est egal : %d\n", k);

            k = k / 2;
            temp = temp * temp;
                        printf("== 0 temp est egal : %d\n\n", temp);
        }

        if (k % 2 != 0)
        {
            printf("k est egal : %d\n", k);
            
            k = k - 1;
            temp2 = temp;
            temp = temp * x;
            printf("!=0 temp est egal : %d\n\n", temp);

        }
    }
    
    return printf("%d\n", temp);
}