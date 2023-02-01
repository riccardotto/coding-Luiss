/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int prezzo;
    int quantita;
    int sconto;
    int totale;
    prezzo=5;
    quantita=1;
    while(quantita>0)
    {
    printf("inserisci quantita da acquistare\n");
    scanf("%d",&quantita);
    if(quantita>50)
    {
        totale=quantita*prezzo;
        printf("il prezzo finale non scontato %d \n", totale);
        printf("il prezzo finale scontato %f \n", totale*(1-0.15));
    }
    else if(quantita>30)
    {
        totale=quantita*prezzo;
        printf("Il prezzo finale non scontato è %d\n", totale);
        printf("il prezzo finale é %f \n", totale*(1-0.1));
    }
    else
    {
        totale=quantita*prezzo;
        printf("il prezzo finale é %d \n", totale);
    }
    }

    return 0;
}
