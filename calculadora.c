#include <stdio.h>

int main (){
    double num1, num2, resultado;
    char op;

    printf("Digite o primeiro número: \n");
    scanf("%lf", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op); // o espaço antes de %c evita ler lixo do teclado

    printf("Digite o segundo número: "); 
    scanf("%lf", &num2);

    switch (op)
    {
        case '+': resultado = num1 + num2;
    break;
        case '-': resultado = num1 - num2;
    break;
        case '*': resultado = num1 * num2;
    break;
        case '/':
        if (num2 != 0)
        resultado = num1 / num2;
        else {
            printf("Erro: divisão por zero!\n");
            return 1;
        }
            break;
    default:
        printf("Operador inválido!\n");
        return 1;



        
    
    }
    printf("Resultado: %lf \n", resultado);
}