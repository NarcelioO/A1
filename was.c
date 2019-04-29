#include<stdio.h>
#include<stdlib.h>


int main(){

int x,i,y=0;
printf("Digite um numero:");
scanf("%i", &x);

for(i=1;i<=x;i++){
 if(x%i==0){
  y++;
}
}
if(y == 2){
printf("primo");

}else{
	printf("n primo");
}
return 0;
}