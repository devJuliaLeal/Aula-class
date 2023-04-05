/* ============================================================================
    Autor: Julia
    Data:  Março de 2023

============================================================================ */

/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Função Principal --- */
main()
{
    int num1,
        num2;

    printf("Forneca um numero ");
    scanf("%d", &num1);
    printf("O numero que voce fornecou e %d\n", num1);

    printf("Forneca outro numero");
    scanf("%d", &num2);
    printf("O numero que voce fornecou e %d\n", num2);

    if (num1 == num2)
    {
        printf("Os numeros sao iguais");
    }
    else
    {
        printf("Os numeros sao diferentes");
    }

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */