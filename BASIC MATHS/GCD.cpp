#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int n1){//Brute Force i = 1 to N.
    int current=0;
    for(int i=1;i<=min(n,n1);i++){
        if(n%i==0 && n1%i==0) current=i;
    }
    return current;
}
int gcd1(int n,int n1){//Brute Force i = N to 1.
    int current=0;
    for(int i=min(n,n1);i>=1;i++){
        if(n%i==0 && n1%i==0) current=i;
    }
    return current;
}
int gcd2(int n,int n1){//Euclidean Algorithm
    int m=max(n,n1);
    int b=min(n,n1);
    int r=m%b;
    if(r!=0){
        while(r!=0){
            int q=m/b,r=m%b;
            if(r==0) return b;
            else{
                m=b;
                b=r;
            }
        }
    }
    else return b;
}
int gcd3(int n,int n1){
    while(n>0 && n1>0){
        if(n>n1) n=n%n1;
        else n1=n1%n;
    }
    if(n==0) return n1;
    else return n;
}
int main(){
    cout << "Enter : ";
    int n,n1;
    cin >> n >> n1;
    cout << gcd3(n,n1);
}