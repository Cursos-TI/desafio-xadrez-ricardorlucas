#include <stdio.h>

int main () {

    char peca;   //variável de escolha da peça

   
         printf("Escolha uma peça, T para torre, B para bispo e R para rainha: ");  //Escolha da peça
         scanf("%c", &peca); //char 

    
    if (peca == 'R'){ //do-while

        printf("Você escolheu rainha. Vamos movimentar sua peça!\n");
         int Rainha = 1;
         do {
         printf("Esquerda!\n");
         Rainha++;
         } while (Rainha != 9);

    } else if (peca == 'B') { //for

        printf("Você escolheu o Bispo. Vamos movimentar sua peça!\n");
         for (int Bispo = 1; Bispo <= 5; Bispo++)
         {
         printf("Cima, Direita!\n");          
         }
 
    } else { //while

        printf("Você escolheu a Torre. Vamos movimentar sua peça!\n");
         int Torre = 1 ;
         while (Torre <= 5)
         {
         printf("Direita\n");    
         Torre++;
         }

    }


     return 0;
}







/*

- Bispo: 5 casas na diagonal superior direita
- Torre: 5 casas para a direita
- Rainha: 8 casas para a esquerda


*/