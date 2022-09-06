#include<stdio.h>

void soma(int n1, int n2){
	int soma=0;
	for(int i=n1;i<=n2;i++){
		if(i%2==0){
			soma+=i;
		}
	}
	printf("%d\n", soma);

}

int main(){
	int n1,n2;

	do{

		scanf("%d \n %d", &n1,&n2);

		if(n1>n2){
			break;
		}
		else{
			soma(n1,n2);
		}
	}while(n1<n2);
}
