#include<iostream>
using namespace std;
int main() {
    cout<<"hi";
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=9;i++){
 if(a<=i && b>=i){cout<<"one"<<endl;i++;}
 if(a<=i && b>=i){cout<<"two"<<endl;i++;}
 if(a<=i && b>=i){cout<<"three"<<endl;i++;}
 if(a<=i && b>=i){cout<<"four"<<endl;i++;}
 if(a<=i && b>=i){cout<<"five"<<endl;i++;}
 if(a<=i && b>=i){cout<<"six"<<endl;i++;}
 if(a<=i && b>=i){cout<<"seven"<<endl;i++;}
 if(a<=i && b>=i){cout<<"eight"<<endl;i++;}
 if(a<=i && b>=i){cout<<"nine"<<endl;i++;}
    }
    if(b>=10){
        a=10;
    while (a<=b) {
    if (a%2==0) {
    cout<<"even"<<endl;
    a++;
    }
    if (a%2!=0) {
    cout<<"odd"<<endl;
    a++;
    }}}
   return 0;
}