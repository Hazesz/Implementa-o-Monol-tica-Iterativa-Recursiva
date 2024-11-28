#include <stdio.h>
#include <string.h>

int verifica_palindromo_rec(char str[], int i, int j) {
    if (i < 0) return 1; 
    if (str[i] != str[j]) return 0;
    return verifica_palindromo_rec(str, i - 1, j + 1);
}

int main() {
    char str[100];
    printf("Digite a palavra (formato w#w^r): ");
    scanf("%s", str);
    
    int len = strlen(str);
    int i = 0;
    
    while (i < len && str[i] != '#') i++;
    
    if (i == len || str[i] != '#') {
        printf("Formato inválido!\n");
        return 1;
    }
    
    if (verifica_palindromo_rec(str, i - 1, i + 1)) {
        printf("Pertence a linguagem L\n");
    } else {
        printf("Nao pertence a linguagem L\n");
    }
    
    return 0;
}
