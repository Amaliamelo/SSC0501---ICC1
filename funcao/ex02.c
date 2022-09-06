#include <stdio.h>

int potencia(int b, int e){
	int pot=1;

	for(int i=0;i<e;i++){
		pot=pot*b;

	}
	return(pot);
}

int main(){
	int b, e, resul;
	char operador;

	do{
		scanf("%d %c %d", &b, &operador, &e);
        //printf("\n%d %c %d\n", b, operador, e);

		if(operador=='p'){
			break;
		}else{
			if(operador!='^'){
				printf("operador invalido\n");
			}
			else{
				resul=potencia(b,e);
				printf("%d\n", resul);
			}
		}

	}while(operador!='p');
}
