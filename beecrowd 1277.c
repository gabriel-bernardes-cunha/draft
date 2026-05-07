#include <stdio.h>
#include <string.h>

int main () {
    //"T" é "turma"
    int T;
    scanf ("%d",&T);
    
    for (int i=0;i<T;i++){
        int N;
        //"N" é número de alunos
        scanf ("%d",&N);
        //uma matriz para guardar cada nome em uma posição de um vetor, no caso, vetor linha
        char estudantes[N][51];
        // outro vetor frequencias[N] cujo conteúdo é a atribuição das frequências calculadas a cada aluno na posição devida
        float frequencias[N];
        
        for (int p=0;p<N;p++) {
            //atribui-se cada nome a uma posição p
            scanf ("%s",estudantes[p]);
            
        }
         for (int p=0;p<N;p++) {
            //Para cada aluno será lido uma sequência
            char f[1000];
            //f representa a sequência de faltas/presenças do aluno
            //O problema não determinou um valor, então será usado um genérico e alto, evitando, assim, estourar o valor do vetor
            scanf ("%s",f);
            ///int L=strlen(f)
            int faltas=0;
            int m=0;
            //m é usada para controlar o atestado médico
            for (int q=0;q<strlen(f);q++){
                if (f[q]=='A'){
                    faltas++;
                }
                if (f[q]=='M'){
                    m++;
                }
            }
            frequencias[p]=(float)(strlen(f)-m-faltas)/(strlen(f)-m);
        }
        //Agora, veremos quem reprovou
        //m vai ser usado para controlar os espaços dos nomes, conforme o problema solicita
        int m=0;
        for (int p=0;p<N;p++) {
            if (frequencias[p]<0.75 && m==0){
                printf("%s",estudantes[p]);
                m=1;
            }
            else if (frequencias[p]<0.75 && m!=0){
                printf(" %s",estudantes[p]);
            }
        }
        printf("\n");
        
    }
    return 0;
}