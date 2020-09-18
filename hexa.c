/*********************************************************************************
*                               Author: Léo Delas                                *
*           File Name: /home/leo/Documents/Langage_C/tp1-Ithoh/hexa.c            *
*                   Creation Date: September 17, 2020 08:36 PM                   *
*                   Last Updated: September 17, 2020 08:37 PM                    *
*                               Source Language: c                               *
*          Repository: https://github.com/PolytechSorbonne-C/tp1-Ithoh           *
*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int hex_to_decimal();

int main(int argc, char const *argv[])
{
    hex_to_decimal();
}

int hex_to_decimal()
{
    char t45;
    int result;
    result = 0;

    printf("Donnez moi un nombre en hexa : ");
    scanf("%c", &t45);
    while ((t45 >= '0' && t45 <= '9') || (t45 >= 'A' && t45 <= 'F'))
    {
        if (t45 >= 'A' && t45 <= 'F')
        result = (result * 16) + t45 - 'A' + 10;

        else
        result = (result * 16) + t45 - '9' + 9;

        scanf("%c",&t45);
    }

    return printf("Le nombre en base 10 est %d\n", result);
}