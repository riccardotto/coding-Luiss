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
    printf("inserisci quantita da acquistare\n");
    scanf("%d",&quantita);
    
    prezzo=5;
    if(quantita>50)
    {
        totale=quantita*prezzo*(1-0.15);
        printf("il prezzo finale é %d \n", totale);
    }
    else if(quantita>30)
    {
        totale=quantita*prezzo*(1-0.1);
        printf("il prezzo finale é %d \n", totale);
    }
else
{
    totale=quantita*prezzo;
    printf("il prezzo finale é %d \n", totale);
}

    return 0;
}
