#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Digite dois números e um operador (+, -, *, /): ");
    scanf("%lf %lf %c", &num1, &num2, &operador);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: Divisão por zero!\n");
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Operador inválido!\n");
            return 1;
        }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}