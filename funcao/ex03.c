#include <stdio.h>

void media_A(float n[3]){
 
    float soma, mediaFinal;
    for(int i=0;i<3;i++){
        soma+=n[i];
		 //printf("\nsoma:%.2f", soma);
    }
    
    mediaFinal=soma/3;
	
	printf("Media: %.1f", mediaFinal);
   
}
void media_P(float n[3]){
     
    float mediaFinal;
    
    mediaFinal=(n[0]*5+n[1]*3+n[2]*2)/10;
	
	 printf("Media: %.1f", mediaFinal);
   
}
void media_H(float n[3]){
    int maior=n[0];
    
    for(int i=0;i<3;i++){
        if(maior<=n[i]){
            maior=n[i];
        }
    }
	printf("Media: %d", maior);
}
int main(){
	float n[3];
	char media;

	for(int i=0;i<3;i++){
		scanf("%f",&n[i]);
	}

	scanf("%s", &media);
	if(media=='A'){
        media_A(n);
         
	}
	else{
        if(media=='P'){
            media_P(n);
            
        }
        else{
            if(media=='H'){
                media_H(n); 
                
            } 
            else{
                printf("invalido");
            }
        }
    }
    
   
}
