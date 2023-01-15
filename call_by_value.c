// #include<stdio.h>
// void fun(int *a){
//     *a=6;
    
// }
// int main(){
//     int k=7;
// fun(&k);
// printf("%d",k);
// return 0;
// }


//***** Doesn't changes value ******
#include<stdio.h>
void fun(int a){
    a=6;
    
}
int main(){
    int k=7;
fun(k);
printf("%d",k);
return 0;
}