// #include<stdio.h>

// int main(){
// char str1[34],str2[34],c;
// int i=0;
// printf("Enter second string\n");    //taking input as a string
// scanf("%s",str2);

// printf("enter the string character by character\n");   //taking character by character
// while(c!='\n'){
//     fflush(stdin);
//     scanf("%c",&c);
//     str1[i]=c;
//     i++;
// }
// printf("string is %s",str1);

// return 0;
// }

#include<stdio.h>
int strle(char *str){
    int len = 0;
    while (*str!='\0')
    {
      len++;
      str++;
    }
    return len;
}
int main(){
char str[]="Shankar";
int l = strle(str);
printf("The length of the string is %d",l);
return 0;
}