/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int wiccu(int n, int potenza)
{
    int tot;
    tot=1;
     while(potenza>0)
    {
        potenza=potenza-1;
        tot=tot*n;
    }
    return tot;
}

int main()
{
    
    
    int n;
    int potenza;
    
 
    
    printf("inserisci un numero");
    scanf("%d",&n);
    printf("inserisci l'esponente");
    scanf("%d",&potenza);
  
     printf("ecco il risultato e %d",wiccu( n, potenza));
    return 0;
    
    }
    
    
    
  



































