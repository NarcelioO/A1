#include<stdio.h>


int main(){
int vec[]={8,9,8,7,41,6,5,7,2,8};
int maxi=0,mini=0,i=0;
int count=0;
for(int i=0; i<sizeof(vec)/sizeof(int);i++){
    maxi=vec[i];
    mini=maxi;
   for(int j=1;j<sizeof(vec)/sizeof(int);j++){
       if(maxi<vec[j]){
           maxi = vec[j];
   }else if (mini>vec[j]){
   mini = vec[j];
   }
   
}
}

 printf("%d %d\n",maxi,mini);

return 0;

}
