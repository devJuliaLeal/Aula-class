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
    char ch = 10;
    int i = 2;
    float f = 1.5;
    double d = 4.88, res;
    res = (ch / i) + (f * d) - (f + i);

    printf("res = %.2f\n", res);

} /* end main */

/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=*/
/* --- Final do Programa --- */