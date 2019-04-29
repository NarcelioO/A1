#include<stdio.h>


int main(){
int vec[]={8,9,8,7,41,6,5,7,2,8};
int maioum=0, maiordois=0;

for(int i=0; i<sizeof(vec)/sizeof(int);i++){
  maioum=vec[i];
  maiordois=maioum;
   for(int j=1;j<sizeof(vec)/sizeof(int);j++){
        if(maioum<vec[j]){
            maioum=vec[j];
        }else if(maiordois<svec[j] && maiordois!=maioum){
            maiordois = vec[j]; 
        }
    }
}
printf("%d %d", maioum,maiordois);
return 0;

}
