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
    float salario, vendas;
    printf("Informe o salario R$:");
    scanf("%f", &salario);
    printf("Informe o valor de vendas em R$:");
    scanf("%f", &vendas);

    if (vendas > 10000.0)
        printf("O salario foi %.2f", salario = salario + (salario / 100.0 * 10.0));

    else
    {
        printf("O salario foi de R$: %.2f", salario);
    }

    if (vendas > 200000.0)
        printf("O salario foi %.2f", salario = salario + (salario / 100.0 * 15.0));

    else
    {
        printf("O salario foi de R$: %.2f", salario);
    }

    if (vendas > 300000.0)
        printf("O salario foi %.2f", salario = salario + (salario / 100.0 * 25.0));

    else
    {
        printf("O salario foi de R$: %.2f", salario);
    }

} /* end main */

/* ============================================================================ */
/* --- Final do Programa --- */