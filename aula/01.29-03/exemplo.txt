/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=
    Autor: Julia
    Data:  Março de 2023
/* =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^= */

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=*/
/* --- Função Principal --- */
main()
{
    float numero1 = 0.0,
          numero2 = 0.0,
          subtracao = 0.0,
          multiplicacao = 0.0,
          divisao = 0.0;

    printf("Digite um numero real: ");
    scanf("%f", &numero1);
    printf("Digite outro numero real: ");
    scanf("%f", &numero2);

    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("A subtracao e %.2f , a multiplicacao e %.2f , e a divisao e %.2f\n", subtracao, multiplicacao, divisao);

    printf("%.2f - %.2f = %.2f\n", numero1, numero2, subtracao);
    printf("%.2f * %.2f = %.2f\n", numero1, numero2, multiplicacao);
    printf("%.2f / %.2f = %.2f\n", numero1, numero2, divisao);

} /* end main */

/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=*/
/* --- Final do Programa --- */