#include <stdio.h>
#include <string.h>

int main () {
    
    int T;
    scanf ("%d",&T);
    
    for (int i=0;i<T;i++){
        int N;
        //N é número de alunos
        scanf ("%d",&N);
        //uma matriz para guardar cada nome em uma posição de um vetor, no caso, vetor linha
        char estudantes[N][51];
        // outro vetor frequencias[N] cujo conteúdo é tribuir as frequências calculadas a cada aluno na posição devida
        float frequencias[N];
        
        for (int p=0;p<N;p++) {
            //atribui-se cada nome a uma posição p
            scanf ("%s",estudantes[p]);
            
        }
         for (int p=0;p<N;p++) {
            char f[1000];
            //f representa a sequência de faltas/presenças do aluno, como o problema não determina uma sequência, estiupula-se um número genérico e alto
            scanf ("%s",f);
            int aulas=strlen(f);
            int faltas=0;
            int atestado=0;
            //"M" é usada para controlar o atestado médico
            for (int q=0;q<aulas;q++){
                if (f[q]=='A'){
                    faltas++;
                }
                //else if diminui o n° de verificações
                else if (f[q]=='M'){
                    atestado++;
                }
            }
            frequencias[p]=(float)(aulas-atestado-faltas)/(aulas-atestado);
        }
        //agora vamos ver quem reprovou
        int primeiro=1;
        for (int p=0;p<N;p++) {
            if (frequencias[p] < 0.75) {

                printf("%s%s", primeiro ? "" : " ", estudantes[p]);
                primeiro = 0;
            }
            /*OU:
            if (primeiro)
              printf("%s", estudantes[p]);
            else
              printf(" %s", estudantes[p]);

              primeiro = 0;*/
            /*********************************/
            /*if (frequencias[p]<0.75 && m==0){
                printf("%s",estudantes[p]);
                m=1;
            }
            else if (frequencias[p]<0.75 && m!=0){
                printf(" %s",estudantes[p]);
            }*/
        }
        printf("\n");
        
    }
    return 0;
}
