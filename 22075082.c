// Name - Shankar nath
// CSE B.Tech
// Roll no - 22075082

//******* Assignment 8 ********
#include<stdio.h>
int main(){
int x,y;
printf("Enter the length of sorted array A\n");
scanf("%d",&x);
int A[x];
for (int i = 0; i < x; i++)
{
    printf("Enter element %d : ",i+1);
    scanf("%d",&A[i]);
}
printf("Enter the length of sorted array B\n");
scanf("%d",&y);
int B[y];
for (int i = 0; i < y; i++)
{
    printf("Enter element %d : ",i+1);
    scanf("%d",&B[i]);
}
int i=0,j=0,k=0;
int C[x+y];
while ((i<x)||(j<y))
{
    if ((i!=x)&&(j!=y))
    {
        if (A[i]<=B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            C[k]=B[j];
            k++;
            j++;
        } 
    }
    else if (i==x)
    {
        C[k]=B[j];
        k++;
        j++;
    }
    else{
        C[k]=A[i];
        k++;
        i++;
    }
    
}
printf("Array merged sorted array C = ");
for (int i = 0; i < (x+y); i++)
{
    printf("%d, ",C[i]);
}
return 0;
}