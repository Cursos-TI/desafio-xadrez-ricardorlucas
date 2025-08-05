#include <stdio.h>

int main() {

    char peca;   //variável de escolha da peça

   
         printf("Escolha uma peça, T para torre, B para bispo, R para rainha e C para cavalo: ");  //Escolha da peça
         scanf("%c", &peca); //Leitura da peça

    
    if (peca == 'R'){ //Escolha da rainha 

        printf("Você escolheu rainha. Vamos movimentar sua peça!\n");
         int Rainha = 1;
         do {  //do-while
         printf("Esquerda!\n");
         Rainha++;
         } while (Rainha != 9);

    } else if (peca == 'B') { //escolha do bispo

        printf("Você escolheu o Bispo. Vamos movimentar sua peça!\n");
         for (int Bispo = 1; Bispo <= 5; Bispo++) //for
         {
         printf("Cima, Direita!\n");          
         }
 
    } else if (peca == 'T') { //Escolha da torre

            printf("Você escolheu a Torre. Vamos movimentar sua peça!\n");
         int Torre = 1 ;
         while (Torre <= 5) //while
         {
         printf("Direita\n");    
         Torre++;
         }

    } else { //escolha do cavalo

         printf("Você escolheu o Cavalo. Vamos movimentar sua peça!\n");
            for (int i = 1; i <= 1; i++) //for while
        {
            int j = 1;
            while (j <= 2)
        {
            printf("Baixo!\n"); //Imprime duas vezes j <= 2 
            j++;
        }
    
        }
        printf("Esquerda!\n");
        }

    return 0;
}