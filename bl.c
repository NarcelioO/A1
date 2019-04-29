#include<stdio.h>


int main(){
    int x [3];
    int achar,a=0,i=0;


    for(i=0;i<sizeof(x)/sizeof(int);i++){
        printf("Digite os valores do vetor: ");
        scanf("%d",&x[i]);
    }
    printf("Digite o valor que desejar achar: ");
    scanf("%d",&achar);
    for(i=0; i<sizeof(x)/sizeof(int);i++){
     if(achar==x[i])
        printf("OK");
        else
         a++;        
    }

    if(a>=sizeof(x)/sizeof(int)){
         printf("Não")  ;
   
    }
    
    



    return 0;
}