/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;
    printf("scrivi lato1\n");
    scanf("%d",&lato1);
    printf("scrivi lato2\n");
    scanf("%d",&lato2);
    printf("scrivi lato3\n");
    scanf("%d",&lato3);
    if(lato1+lato2>lato3 && lato2+lato1>lato3 && lato2+lato3>lato1)
    {
        printf("è un triangolo");
    }
    else
    {
        printf("non è un triangolo");
    }
    
    return 0;
}
