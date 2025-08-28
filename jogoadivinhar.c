#include <stdio.h>
#include <stdlib.h> // para rand() e srand()
#include <time.h>   // para time()

int main() {
    int numeroSecreto, chute;
    int tentativas = 0;
    char continuar = 's'; // variável para controlar o loop

    // inicializa o gerador de números aleatórios
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1; // número entre 1 e 100

    while(continuar == 's' || continuar == 'S') {
    printf("Bem-vindo ao Jogo da Adivinhacao!\n");
    printf("Tente adivinhar o numero de 1 a 100.\n");

    // loop principal
    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if(chute > numeroSecreto) {
            printf("Menos! Tente novamente.\n");
        } else if(chute < numeroSecreto) {
            printf("Mais! Tente novamente.\n");
        } else {
            printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);
        }
    } while(chute != numeroSecreto);

    printf("Deseja fazer outra adivinhação? (s/n): ");
    scanf(" %c", &continuar); // note o espaço antes de %c para evitar lixo do teclado
}
    printf("O jogo foi encerrado!\n");

    return 0;
}
