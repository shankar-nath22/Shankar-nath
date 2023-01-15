#include <stdio.h>
int main()
{ char a[50]; char b[50]; char c[50];
scanf("%s",a); int i=0,j,k;
while(a[i]!='\0') { i++;}
if(i%2==0) {for(int j=0;j<i/2;j++) b[j]=a[j];

for(int k=0;j<i;k++) c[k]=a[j++];} 
else{

for( j=0;j<(i/2+1);j++) b[j]=a[j];
b[j]=0;
for( k=0;j<i;k++) c[k]=a[j++];
c[k]=0;}
printf("%s %s",b,c); 
return 0;
}