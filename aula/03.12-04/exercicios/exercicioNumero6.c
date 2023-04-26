/* ============================================================================
    Autor: Julia
    Data:  Março de 2023
  6 : escreva um progrmaa que apresente a tabuada do numero qualquer, apresnetando a tela.



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
        contador = 1,
        num;
    printf("Digite um numero inteiro:");
    scanf("%d", &num);

    printf("Tabuada de %d:\n\n", num);

    printf("\t%d x 1 = %d\n", num, num * 1);
    printf("\t%d x 2 = %d\n", num, num * 2);
    printf("\t%d x 3 = %d\n", num, num * 3);
    printf("\t%d x 4 = %d\n", num, num * 4);
    printf("\t%d x 5 = %d\n", num, num * 5);
    printf("\t%d x 6 = %d\n", num, num * 6);
    printf("\t%d x 7 = %d\n", num, num * 7);
    printf("\t%d x 8 = %d\n", num, num * 8);
    printf("\t%d x 9 = %d\n", num, num * 9);
    printf("\t%d x 10 = %d\n", num, num * 10);

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */