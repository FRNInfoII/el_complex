#include<stdio.h>
#include "my_complex.h"
int main()
{
    struct my_complex z1,z2,suma,resta,multi,conju;

    //Primer numero complejo
    printf("Ingresar parte real del primer numero complejo:");
    scanf("%f",&z1.re);
    printf("\nIngresar parte imaginaria del primer numero complejo:");
    scanf("%f",&z1.im);

    //Segundo numero complejo
    printf("\nIngresar parte real del segundo numero complejo:");
    scanf("%f",&z2.re);
    printf("\nIngresar parte imaginaria del segundo numero complejo:");
    scanf("%f",&z2.im);

    //Llamo a la funcion suma de los numeros complejos
    suma=Sumacomplejos(z1,z2);

    //Mostrar el resultado
printf("\nSuma de los numeros complejos =%.2f+%.2fi \n",suma.re,suma.im);
    
    //Llamo a la funcion resta de numeros complejos
    resta=Restacomplejos(z1,z2);

    //Mostrar el resultado de las restas
    printf("\nResta de los numeros complejos =%.2f+%.2fi \n",resta.re,resta.im);
    
    //Multiplico los numeros complejos
    multi=MultiplicaComplejos(z1,z2);
    
    //Mostrar el resultado de multiplicar
    printf("\nMultiplacion de los numeros complejos =%.2f+%.2fi \n",multi.re,multi.im);
    
    //Conjugado de numero complejo
    conju=Conjugado(z1);

    printf("\nConjugado del Numero Complejo:%.2f + %.2fi",conju.re,conju.im);

    return 0;
};  