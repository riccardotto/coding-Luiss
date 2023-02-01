/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int cont;
    int somma;
    int media;
    printf("inserisci un numero positivo\n");
    
    numero=0;
    cont=0;
    somma=0;
    media=0;
    while(numero>=0)
    {
        scanf("%d",&numero);
        somma=somma+numero;
        cont=cont+1;
        media=somma/cont;
        printf("fare la somma di tutti i numeri inseriti %d\n", media);
    }

    return 0;
}
