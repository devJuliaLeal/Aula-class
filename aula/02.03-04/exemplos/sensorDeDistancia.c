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
    int dist,
        temp = 0;

    printf("Entre com a distancia em cm:");
    scanf("%d", &dist);

    if (dist <= 25)
    {
        printf("Robo desvia obstaculo.\n");
        temp = dist;
    }
    if (temp != 0)
    {
        printf("O robo detectou um obstaculo.\n");
    }

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */