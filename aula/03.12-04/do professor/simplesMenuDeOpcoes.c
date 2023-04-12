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
    float numero1, numero2;
    int opt;
    printf("Digite numero1:");
    scanf("%f", &numero1);
    printf("Digite numero2: ");
    scanf("%f", &numero2);
    printf("1 - somar\n");
    printf("2 - subtrair\n");
    printf("3 - multiplicar\n");
    printf("4 - dividir\n ");
    printf("Escolha uma opcao:");
    scanf("%d", &opt);
    if (opt == 1)
        printf("%.2f + %.2f =  %.2f ", numero1, numero2, numero1 + numero2);
    else if (opt == 2)
        printf("%.2f + %.2f= %.2f ", numero1, numero2, numero1 - numero2);
    else if (opt == 3)
        printf("%.2f + %.2f= %.2f ", numero1, numero2, numero1 * numero2);
    else if (opt == 4)
        printf("%.2f + %.2f= %.2f ", numero1, numero2, numero1 / numero2);
    else
        printf("Opcao invalida");

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */