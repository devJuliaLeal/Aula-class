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
    float temperatura;

    printf("digite a temperatura em graus Celsius:");
    scanf("%f", &temperatura);

    if (temperatura >= 50.0)
    {
        printf("Alerta, temperatura elevada.\n");
    }
    else
    {
        printf("Temperatura normal.\n");
    }

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */