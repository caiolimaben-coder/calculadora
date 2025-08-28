#include <stdio.h>

int main() {
    int opcao;
    double valor, resultado;
    char continuar = 's'; // variável para controlar o loop

    
    while(continuar == 's' || continuar == 'S') {
    printf("Escolha a conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Metros para Quilometros\n");
    printf("3 - g para KG\n");
    printf("4 - ML para L\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &valor);
        resultado = (valor * 9.0/5.0) + 32;
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", valor, resultado);
    }
    else if(opcao == 2){
        printf("Digite a distancia em metros: ");
        scanf("%lf", &valor);
        resultado = valor / 1000.0;
        printf("%.2lf metros = %.2lf km\n", valor, resultado);
    }
    else if(opcao == 3){
        printf("Digite a quantidade em g: ");
        scanf("%lf", &valor);
        resultado = valor / 1000.0;
        printf("%.2f gramas = %.2f Kg\n", valor, resultado);
    }
    else if(opcao == 4){
        printf("Digite a quantidade em MLs: ");
        scanf("%lf", &valor);
        resultado = valor / 1000.0;
        printf("%.2f MLs = %.2f L\n", valor, resultado);
    }
    else {
        printf("Opcao invalida!\n");
    }

    printf("Deseja fazer outra conversao? (s/n): ");
    scanf(" %c", &continuar); // note o espaço antes de %c para evitar lixo do teclado
    }

    printf("Programa encerrado.\n");
    return 0;
}