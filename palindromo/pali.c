#include <stdio.h>
#include <string.h>

int main()
{
    char pal1[20];
    char pal2[20], invertida[20];
    printf("Digite uma palavra para verificar palindromo: ");
    scanf("%s", pal1);
    printf("Digite uma palavra para verificar palindromo: ");
    scanf("%s", pal2);
    int len = strlen(pal2);
    int i,j;
    for( i=0, j= len - 1; j>=0; i++, j--){
        invertida[i]=pal2[j];
    }
    invertida[i]='\0';
    if(strcmp(pal1, invertida)==0){
        printf("A palavra é palindromo");
    }else{
        printf("A segunda não é anagrama");
    }

    
    return 0;
}

