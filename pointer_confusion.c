#include<stdio.h>
int mul10(int *a){
   *a = (*a)*10;
   int c=*a; 
   return c;
   //return 0;
}
int main(){
    int k=5;
//mul10(&k);
printf("%d",mul10(&k));
return 0;
}

