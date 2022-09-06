#include<stdio.h>
#include<stdlib.h>

int main(){

	int *var1 = malloc(1*sizeof(int));
	int *var2 = malloc(1*sizeof(int));

	int resul1=0,resul2=0,aux=0,i, menor=0;

	do{
		scanf("%d %d", var1, var2);
		if(*var1==1&&*var2==1){
			break;
		}
		if(*var1<=*var2){
            menor=*var1;
		}
		else{
            menor=*var2;
		}
        for(int i=1;i<=menor;i++){
            resul1=*var1%i;
            resul2=*var2%i;
            if(resul1==0&&resul2==0){
                aux=i;
            }
        }

		printf("\n%d\n", aux);
	}while(*var1!=1||*var2!=1);


}