#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	int *n = malloc(1*sizeof(int));
	int *m = malloc(1*sizeof(int));

	scanf("%d %d", n, m);

	int aux = *n-2;
	int **pares;
		pares = (int**)malloc(aux*sizeof(int*));

		for(int i=0;i<aux;i++){
			 pares[i]=(int*)malloc(2*sizeof(int));
		}

	for(int i=0;i<aux;i++){
		for(int j=0;j<2;j++){
			scanf("%d", &pares[i][j]);
		}
	} 
	
	/*printf("\n N: %d M:%d\n", *n, *m);
	
	for(int i=0;i<aux;i++){
		for(int j=0;j<2;j++){
			printf("%d ", pares[i][j]);
		}
		printf("\n");
	} */
    
    int p1,p2; 
	int **matriz;
	matriz = (int**)malloc(*n*sizeof(int*));

	for(int i=0;i<*n;i++){
		matriz[i]=(int*)malloc(*m*sizeof(int));
	}
    int temp;
    for(int i=0;i<*n;i++){
		for(int j=0;j<*m;j++){
            if(i==0){
                if((j+1)%2==0){
                    matriz[i][j]=0;
                }
                else{
                    matriz[i][j]=j+1;
                }
                
            }
            else{
                if(i==1){
                    if((j+1)%2==0){
                        matriz[i][j]=j+1;
                    }
                    else{
                        matriz[i][j]=0;
                    }
                }
                else{
                    p1=pares[i-2][0]-1;
				    p2=pares[i-2][1]-1;
                    
                    //printf("\n%d %d", p1,p2);

                    if(p1>p2){
                        temp=p2;
                        p2=p1;
                        p1=temp;
                    }

                    if(j>=p1 && j<=p2){
                         matriz[i][j]=matriz[i-2][j]-matriz[i-1][j];
                       
                    }
                    else{
                        matriz[i][j]=matriz[i-2][j]+matriz[i-1][j];
                    } 
                }
            }				
		}
	} 
   /* printf("\n");
	for(int i=0;i<*n;i++){
		for(int j=0;j<*m;j++){
			printf("%d ", matriz[i][j]);

		}
		printf("\n");
	} */

    int negativos=0, positivos=0;
    int l = *n-1;
    for(int j=0;j<*m;j++){
        if(matriz[l][j]<0){
            negativos++;
        }
        if(matriz[l][j]>0){
            positivos++;
        }
    }

    printf("\n%d %d", negativos,positivos);
}