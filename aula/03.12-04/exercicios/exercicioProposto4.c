/* ============================================================================
    Autor: Julia
    Data:  Março de 2023
  4 : escreva um programa para o Ministerio da Saúde que auxilia nas informacao sobre dengue em palmas. esse programa deve receber os dados sobte o numero de casos suspeitos, o numero de casos confirmados e o numero de mortes apresentando eles na tela


============================================================================ */

/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Função Principal --- */
main()
{

    int casos_suspeitos,
        casos_confirmados,
        numero_de_mortes;

    printf("Preencha com as seguintes informacoes sobre a dengue em Palmas:\n");
    printf("\tCasos suspeitos:\n");
    scanf("%d", &casos_suspeitos);
    printf("\tCasos confirmados:\n");
    scanf("%d", &casos_confirmados);
    printf("\tQuantidade de mortes:\n");
    scanf("%d", &numero_de_mortes);
    printf("Informacoes sobre a dengue em Palmas:\n");
    printf("\tCasos suspeitos: %d\n", casos_suspeitos);
    printf("\tCasos confirmados: %d\n", casos_confirmados);
    printf("\tQuantidade de mortes: %d\n", numero_de_mortes);

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */