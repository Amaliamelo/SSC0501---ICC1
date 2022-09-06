#include<stdio.h>

int main(){
    int estacoes[5][2];

    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            scanf("%d", &estacoes[i][j]);
        }
    }

    int total_passageiros=0;

    for(int i=0;i<5;i++){
        total_passageiros+=estacoes[i][0];
    }

    printf("\nTotal de passageiros transportados: %d\n", total_passageiros);
      printf("\n");
    printf("Circulacao de passageiros por estacao:(entra+sai)\n");

    int circulacao[5]={0,0,0,0,0};

    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            circulacao[i]=circulacao[i]+estacoes[i][j];
        }
        printf("Estacao[%d]:%d ", i, circulacao[i]);
    }
    printf("\n");
    printf("\nPassageiros transportados por estacao:(dentro do trem ao sair da estacao)\n");
    printf("\n");
    int tranportados=0;

    for(int i=0;i<5;i++){
        tranportados+=estacoes[i][0]-estacoes[i][1];
        printf("Estacao[%d]:%d ", i, tranportados);
    }

}
