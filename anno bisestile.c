/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int anno_normale;
    printf("inserisci l'anno\n");
    scanf("%d",&anno_normale);
    if((anno_normale%4==0 && anno_normale%100!=0)|| anno_normale%400==0)
    {
        printf("l'anno è normale\n");
    }
    else
    {
        printf("l'anno è bisestile\n");
    }
    
    return 0;
}
