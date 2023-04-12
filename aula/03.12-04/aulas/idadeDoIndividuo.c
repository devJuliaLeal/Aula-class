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
    int idade = 0;
    char temCarro;

    printf("Digite sua idade:", idade);
    scanf("%d", &idade);

    printf("Voce tem carro? (responda com S ou N)\n", temCarro);
    scanf("%s", &temCarro);

    if (temCarro == 'N' && 18 <= idade <= 50)
    {
        printf("Voce recebe 500 reais");
    }
    else
    {
        printf("Voce recebe 200 reais");
    }

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */