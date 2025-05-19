#include <stdio.h>

int main() {
    int idade;

    // Solicita a idade do usuário
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Verifica a categoria de idade usando if-else aninhados
    if (idade >= 0 && idade <= 12) {
        printf("Crianca\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("Adulto\n");
    } else if (idade >= 60) {
        printf("Idoso\n");
    } else {
        printf("Idade invalida\n"); // Caso a idade seja negativa
    }

    return 0;
}