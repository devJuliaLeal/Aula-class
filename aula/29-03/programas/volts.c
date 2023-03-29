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
    int val_ADC;
    float volts;

    printf("Inserir um valor de ADC entre 0 e 1023: ");
    scanf("%d", &val_ADC);

    volts = (int)(val_ADC * 5.0 / 1023.0);

    printf("A tensao lida foi: %.2f v\n", volts);

} /* end main */

/*  =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=*/
/* --- Final do Programa --- */