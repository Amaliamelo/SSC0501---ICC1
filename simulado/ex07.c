#include<stdio.h>

/*Função(x, y, k, matriz)
    Se fora da matriz, ou diferente de 0 retorna
Função(x-1,y, k+1,matriz)//ir pra esquerda
Função(x+1,y, k+1,matriz)//ir pra direita
Função(x,y-1, k+1,matriz)//baixo
Função(x,y+1, k+1,matriz)//cima*/

//void mapa(x,y,matriz){

//}

int main(){

    //lendo dimensãos da matriz
    int linhas,colunas;
    scanf("%d %d", &linhas, &colunas);

    linhas=linhas+2;
    colunas=colunas+2;
    //lendo matriz
    int L[linhas][colunas];

    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            scanf("%d", &L[i][j]);
        }
        printf("\n");
    }

    // lendo posição
    struct posicao{
        int x;
        int y;
    };

    struct posicao A, B;
    scanf("%d %d", &A.x, &A.y);
    scanf("%d %d", &B.x, &B.y);

    //imprimindo entradas
    printf("\n linhas:%d colunas:%d", linhas, colunas);
    printf("\n matriz:\n");
     for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            printf("%d ", L[i][j]);
        }
        printf("\n");
    }
    printf("\n A[x]:%d A[y]:%d", A.x, A.y);
    printf("\n B[x]:%d B[y]:%d", B.x, B.y);
    
    //marcando o destino com 1
     for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            if(i==B.x||j==B.y){
                L[i][j]=1;
            }
        }
    }

    //mapa(B.x,B.y, L);


    return 0;
}