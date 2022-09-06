#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int m,n;

    scanf("%d %d", &n,&m);

    int **matriz;
	matriz = (int**)malloc(n*sizeof(int*));


	for(int i=0;i<n;i++){
		 matriz[i]=(int*)malloc(m*sizeof(int));
	}

	srand(time(NULL));

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			matriz[i][j]= rand() % 100;
		}
	}

	int maior=matriz[0][0], menor=matriz[0][0],x0,y0, x1,y1;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(maior<=matriz[i][j]){
                maior=matriz[i][j];
                x0=i;
                y0=j;
			}
			if(menor>=matriz[i][j]){
                menor=matriz[i][j];
                x1=i;
                y1=j;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nmaior:%d[%d][%d]", maior, x0,y0);
	printf("\nenor:%d[%d][%d]", menor, x1,y1);

}
