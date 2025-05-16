#include<bits/stdc++.h>
using namespace std;
int fibo(int i,int n){
    static int a=0,b=1, c;
    if(i==1){
        cout << a;
    }
    else if(i==2) {
        cout << a << endl << b << endl;
    }
    if(i>=n) return 0;
    if(i>=3){
        c=a+b;
        cout << c << endl;
        a=b;
        b=c;
    }
    fibo(i+1,n);
}
int f(int n){
    if(n<=1) return n;
    int l=f(n-1);
    int sl=f(n-2);
    return l + sl;
}
int main(){
    //cout << "Enter : ";
    //int n;
    //cin >> n;
    cout << f(3);
}