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
    int temperatura,
        energia;

    printf("Digite a temperatura: \n");
    scanf("%d", &temperatura);

    printf("Qual a energia? \n");
    scanf("%d", &energia);

    if (temperatura < 30)
        if (energia > 80)
            printf("Ação de aquecedor.\n");
        else
            printf("Alerta: energia insuficiente.\n");

    else
        printf("Temperatura ok.\n");

    /*end else*/

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */