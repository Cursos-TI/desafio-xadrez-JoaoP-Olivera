#include <stdio.h>
  const int RAINHA = 8; //Oito casas para a esquerda
    const int BISPO = 5;  //5 casas pra diagonal
    const int TORRE = 5; //5 casa para a direita

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

///Implementando a recursividade do torre e da rainha:

void moveRainha(int numeroDeCasas)
{
    if(numeroDeCasas > 0)
    {
        printf("Esquerda \n");

        moveRainha(numeroDeCasas - 1);
    }
}

void moveTorre(int numeroDeCasas)
{
    if(numeroDeCasas > 0)
    {
        printf("Esquerda \n");

        moveTorre(numeroDeCasas - 1);
    }
}

void moveOCavalo()
{
     for (int i = 1; i == 1; i++)
    {
        int k = 0;
        while(k <= 2)
        {
            printf("Baixo \n");

            k++;
        }

        printf("Esquerda \n");
    }
}

///Movimento externo -> 2
///Movimento interno -> 3

void moveOBispo(int casas)
{
    if (casas <= 0) return; // condição de parada da recursão

    // Loop externo: anda "casas" vezes na vertical
    for (int i = 0; i < casas; i++)
    {
        printf("Cima\n");

        // Loop interno: anda apenas 1 vez na horizontal
        for (int j = 0; j < 1; j++)
        {
            printf("Direita\n");
        }
    }

    // Chamada recursiva para continuar reduzindo até 0
    moveOBispo(casas - 1);
}



int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

  
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do bispo:  \n");

    moveOBispo(BISPO);

  

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

  printf("Movimentação do torre:  \n");

    moveTorre(TORRE);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

     printf("Movimentação do rainha:  \n");

     moveRainha(RAINHA);

   // for(int i = 0; i < RAINHA; i++)
  //  {
  //      printf("Esquerda \n");
   // }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do cavalo");
    moveOCavalo();
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
