#include<stdio.h>

void quadrado(int *numPtr){
		*numPtr=*numPtr**numPtr;
}

int main(){
	int numPtr;
	
	scanf("%d", &numPtr);
	
	quadrado(&numPtr);
	
	printf("%d", numPtr);
}