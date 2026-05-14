#include <stdio.h>
 
int main() {

    int N;
    scanf("%d",&N);
    char nome [N] [31];
    char artista [N] [31];
    
    for (int i=0;i<N;i=++) {
        //%30 para permitir ler no máximo 30 caracteres!
        //Primeiramente, vamos atribuir as múscias e os artistas às matrizes.
        scanf("%30s",nome[i]);
        scanf("%30s",artista[i]);
        
        for (int p=0;p;p++) {
        //quando nome[i][j]='\0' break, até lá, 
       
        }
    }
    //Agora, a tal "string de ouro" para cada termo, isto é, cada linha das duas matrizes anteriores.
    //Vamos criar uma matriz com as strings de ouro.
    char oro [N][31];
    for (int i=0;i<N;i=++) {
       //O próximo laço scaneia uma linha z, para cada outra linha, vendo suas diferenças.
       for (int z=0;z<N;z++) {
          if (z!=i) {
             int u=0;
             //Agora, vemos cada caractere em uma linha.
             for (int x=0;x<30;x++) {
                 if (nome[i][x]!=nome[z][x]) {
                      oro[i][u]=nome[i][x];
      
                 }
             }
          }
          /*else {


          }*/
       }
       /*for (int t=0;t<30;t++) {
        
          if (nome[i][t]=) {
  
             oro[i][u]=nome[i][t];



           
          }
       }*/
    
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
 
int main() {

    int N;
    scanf("%d",&N);
    char nome [N] [31];
    char artista [N] [31];
    
    for (int i=0;i<N;i=++) {
        //%30 para permitir ler no máximo 30 caracteres!
        //Primeiramente, vamos atribuir as múscias e os artistas às matrizes.
        scanf("%30s",nome[i]);
        scanf("%30s",artista[i]);
        }
    }
    //Agora, a tal "string de ouro" para cada termo, isto é, cada linha das duas matrizes anteriores.
    
    //Vamos criar uma matriz com as strings de ouro.
    char oro [N][31];
    //Criemos um vetor "Total", seu uso ficará claro em seguida.
    char temp[30*N+1];
    
    for (int i=0;i<N;i=++) {
       for(int u=0;u<N;u++){
          if (u!=i){
              strcat(temp,oro[i]);
          }
       }
    }
    //Agora, há um vetor com todas linhas (temp), exceto a que vai ser analisada.

    //Analisando:
       
    for (int i=0;i<N*31;i++) {
           
    }
       
       /*for (int t=0;t<30;t++) {
        
          if (nome[i][t]=) {
  
             oro[i][u]=nome[i][t];
           
          }
       }*/
    
    return 0;
}

*/
