#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
if(n==0 || n==1){
    cout<<"true";
}
else{
    int a=0;
    int b=1;
    int c=a+b;
    while(c<n){
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
}
