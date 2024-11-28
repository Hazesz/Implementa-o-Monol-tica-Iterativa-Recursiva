#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite a palavra (formato w#w^r): ");
    scanf("%s", str);
    
    int len = strlen(str);
    int i = 0, j = len - 1;


    while (i < j && str[i] != '#') i++;
    
    if (i == j || str[i] != '#') {
        printf("Formato invalido!\n");
        return 1;
    }
    
    int k = i + 1; 
    

    for (i = i - 1; i >= 0; i--, k++) {
        if (str[i] != str[k]) {
            printf("Nao pertence a linguagem L\n");
            return 1;
        }
    }

    printf("Pertence a linguagem L\n");
    return 0;
}
