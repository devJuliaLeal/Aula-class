/* ============================================================================
    Autor: Julia
    Data:  Março de 2023
  3 : escreva um progrmaa que apresente a tabuada do numero 3



============================================================================ */

/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Função Principal --- */
main()
{

    int tabuada = 3,
        contador = 1;
    printf("tabuada do 3:");

    for (contador = 1; contador <= 10; contador++)
    {
        printf("%d x %d = %d\n", tabuada, contador, tabuada * contador);
    }

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */