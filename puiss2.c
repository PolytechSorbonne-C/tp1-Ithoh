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
    int resultat;
    int temp;

    resultat = x;
    temp = 1;

    while (k > 1)
    {
        if (k % 2 == 0)
        {
            
            k = k / 2;
            resultat *= resultat;
            printf("k est egal : %d\n", k);
            printf("== 0 temp est egal : %d\n\n", resultat);
        }

        else if (k % 2 != 0)
        {
            printf("k est egal : %d\n", k);
            
            k /= 2;
            temp = temp * resultat;
            resultat *= resultat;
            
            printf("!=0 temp est egal : %d\n\n", resultat);

        }
    }
    
    return printf("%d\n", resultat*temp);
}