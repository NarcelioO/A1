#include<stdio.h>
//Q1 Soma,Div,
int main(){
int vec[]={1,2,3,4,5,6,7,8,9,10};
int soma=0,i=0;
int spares=0,impa=0,a=0;
/*
for(int i=0; i<sizeof(vec)/sizeof(int);i++){
 soma += vec[i];
}
div = soma / (sizeof(vec)/sizeof(int));
printf("%d\n",soma);
printf("%d\n",div);
*/
for(int i=0; i<sizeof(vec)/sizeof(int);i++){
if(vec[i]%2==0){
spares += vec[i];  
}else{
impa+=vec[i];
}
}
a = spares-impa;
printf("%d",a);

return 0;
}