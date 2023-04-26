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
    float volts,
        ohms,
        corrente,
        potencia,
        tensão;

    int opt;

    printf("Digite o valor de Volts:");
    scanf("%f", &volts);
    printf("Digite o valor de Ohms: ");
    scanf("%f", &ohms);
    printf("1 - corrente que circula pelo resistor\n");
    printf("2 - corrente dissipada no resistor: \n");
    printf("3 - valor da tensao para uma corrente de 100mA: \n");
    printf("Escolha uma opcao:");
    scanf("%d", &opt);
    if (opt == 1)
        printf("corrente que circula pelo resistor: %.2f ", corrente = volts / ohms);
    else if (opt == 2)
        printf("corrente dissipada no resistor: %.2f ", potencia = 1 * volts);
    else if (opt == 3)
        printf("valor da tensao para uma corrente de 100mA: %.2f ", tensão = 0.1 * ohms);

    else
        printf("Opcao invalida");

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */