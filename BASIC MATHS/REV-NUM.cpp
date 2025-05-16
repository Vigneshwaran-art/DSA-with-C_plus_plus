#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    long long revnum=0,n1=0;
    n1=n;
    if(n<0)  n=-n;
    while(n>0){
        int rem=n%10;
        revnum=revnum*10 +rem;
        n=n/10;
    }
    if(n1<0)  return (revnum<INT_MIN) ? 0 : -revnum;
    return (revnum>INT_MAX) ? 0 : revnum;
}

int main(){
    long long n;
    cout<<"Enter : ";
    cin >> n;
    cout << rev(n);
}