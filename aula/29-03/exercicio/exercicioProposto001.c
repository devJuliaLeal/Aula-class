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
    int pi = 3.1415,
        numero1 = 0.0,
        numero2 = 0.0,
        subtracao = 0.0,
        multiplicacao = 0.0,
        divisao = 0.0;

    printf("Digite um numero real: ");
    scanf("%d", &numero1);
    printf("Digite outro numero real: ");
    scanf("%d", &numero2);

    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("A subtracao e %d , a multiplicacao e %d , e a divisao e %d ", subtracao, multiplicacao, divisao);

    system("PAUSE");
    return 0;

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */