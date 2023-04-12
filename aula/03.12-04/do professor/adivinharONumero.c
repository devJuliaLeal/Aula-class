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
    int numero, chute;
    printf("insira um numero de 0 a 10: \n");
    scanf("%d", &numero);
    if (numero < 0 || numero > 10)

    {
        printf("Entrada invalida. O numero sera 5.\a\n");
        numero = 5;
        system("PAUSE");
    }
    system("CLS");
    printf("Adivinhe o numero:");
    scanf("%d", &chute);
    if (chute == numero)
        printf("Acertou o numero \x82 %d!!!");
    else if (chute > numero)
        printf("Errou, o numero \x82 menor!");
    else
        printf("Errou, o numero \x82 maior!\n");

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */