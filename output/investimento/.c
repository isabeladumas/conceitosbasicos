#include <stdio.h>

int main()
{
    int t, v;
    float r, m, j = 0;

    printf("Qual foi o tempo do investimento? ");
    scanf("%d", &t);
    printf("Qual foi a taxa do investimento? ");
    scanf("%f", &r);
    printf("Qual foi o valor do investimento? ");
    scanf("%d", &v);

    r = r / 100;   
    m = v;         

    for(int i = 0; i < t; i++){
        j += r * v;   // juros acumulado
    }

    m = v + j;   // montante final

    printf("O valor apos o investimento e o juros foram, respectivamente %.2f e %.2f", m, j);

    return 0;
}

