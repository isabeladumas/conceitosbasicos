#include <stdio.h>

int main() {
    int num;
    printf("Digite a quantidade de cidades que visitou: ");
    scanf("%d", &num);

    char cidade[num][20];
    float gasto[num];

    for(int i = 0; i < num; i++){
        printf("Digite a cidade que visitou: ");
        scanf("%19s", cidade[i]);      // evita estouro de buffer
        printf("Digite os gastos com essa cidade: ");
        scanf("%f", &gasto[i]);
    }

    float menor = gasto[0];
    float maior = gasto[0];
    int maiscara = 0;
    int maisbarata = 0;
    float sum = 0.0;

    for(int i = 0; i < num; i++){
        if(gasto[i] > maior){
            maior = gasto[i];
            maiscara = i;
        }
        if(gasto[i] < menor){
            menor = gasto[i];
            maisbarata = i;
        }
        sum += gasto[i];
    }

    printf("\nCidade mais cara: %s (R$ %.2f)", cidade[maiscara], maior);
    printf("\nCidade mais barata: %s (R$ %.2f)", cidade[maisbarata], menor);
    printf("\nGasto total: R$ %.2f\n", sum);

    return 0;
}
