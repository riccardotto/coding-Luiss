/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    
    printf("inserisci un numero\n");
    scanf("%d",&numero1);
    printf("inserisci un altro numero\n");
    scanf("%d",&numero2);
    if(numero1%numero2==0)
    {
        printf("è multiplo\n");
    }
    else
    {printf("non è multiplo\n");
    }
    return 0;
}
