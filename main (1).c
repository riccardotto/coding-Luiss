/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1;
    float fahrenheit;
    float kelvin;
    
    printf("inserisci una temperatura\n");
    scanf("%f",&num1);
    if(num1<=-273.15)
    {
        printf("error\n");
    }
    else
    {
        fahrenheit=(9/5)*num1+32;
        kelvin=num1+273.15;
        printf("la temperatura in kelvin è: %f\n",kelvin);
        printf("la temperatura in fahrenheit è: %f\n",fahrenheit);
        
    }
    return 0;
}
