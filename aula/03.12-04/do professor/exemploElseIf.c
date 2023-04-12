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
    int valor;
    printf("Insira um valor:");
    scanf("%d", &valor);

    if (valor == 1)
        printf("Valor igual a 1\n");
    else if (valor == 2)
        printf("Valor igual a 2\n");
    else if (valor == 3)
        printf("Valor igual a 3\n");

    else
        printf("Valor nao encontrado\n");

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */