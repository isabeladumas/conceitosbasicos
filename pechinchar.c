#include <stdio.h>

int main()
{
    int f1, f2, f3;

    printf("Qual o preço do fornecedor 1? ");
    scanf("%d", &f1);

    printf("Qual o preço do fornecedor 2? ");
    scanf("%d", &f2);

    printf("Qual o preço do fornecedor 3? ");
    scanf("%d", &f3);
    if (f1 < f2 && f1 < f3)
    {
        printf("O produto mais barato é o 1");
    }
    else if (f2 < f1 && f2 < f3)
    {
        printf("O produto mais barato é o 2");
    }
    else if (f3 < f1 && f3 < f2)
    {
        printf("O produto mais barato é o 3");
    }
    else
    {
        printf("Há preços iguais.");
    }

    if (f1 > f2 && f1 > f3)
    {
        printf("\nO produto mais caro é o 1");
    }
    else if (f2 > f1 && f2 > f3)
    {
        printf("\nO produto mais caro é o 2");
    }
    else if (f3 > f1 && f3 > f2)
    {
        printf("\nO produto mais caro é o 3");
    }
    else
    {
        printf("\nHá preços iguais.");
    }

    return 0;
}
