/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft(int*nbr,int*z,int y)
{
    *nbr=42;
    *z=6;
    y=3;
}
int main()              // identifica un programma
{
    int nbr=1;
    int z=2;
    int y=102;
    printf("il valore iniziale %d\n", nbr);
    printf("valore iniziale: %d\n",z);
    printf("valore iniziale %d\n",y);
    ft_ft(&nbr, &z, y);
    printf("il valore effettivo dopo aver richiamato ft_ft:%d %d %d\n",nbr, z, y);

   

    return 0;
}
