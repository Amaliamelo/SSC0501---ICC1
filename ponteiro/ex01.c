#include <stdio.h>

void inverteDigitos(int *num){
	//escreva sua solução aqui
    int novo = 0;
    while(*num>0) {
        int lDigit = *num%10;
        novo = (novo*10)+lDigit;
        *num=*num/10;
        //printf("\nnum:%d \n novo:%d", *num,novo);
    }

    *num = novo;
}

int main(){
	int num;
	scanf("%d", &num);
	inverteDigitos(&num);
	printf("%d\n", num);
	return 0;
}