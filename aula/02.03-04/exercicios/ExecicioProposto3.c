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
    printf("Digite um numero:");
    scanf("%d", num1);

    printf("Digite outro numero:");
    scanf("%d", num2);

    if (num1 > num2)
    {
        printf("A ordem e: %d %d ", num1, num2);
    }
    else
    {
        printf("A ordem e: %d %d ", num2, num1);
    }

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */