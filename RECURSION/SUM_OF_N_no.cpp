#include<bits/stdc++.h>
using namespace std;
void sumOfNno(int n,int sum){
    if(n==0) {
        cout << sum ;
         return ;
    }
    sumOfNno(n-1,sum+n);
}
int sumOfNno2(int n){
    if(n<1) return 0;
    return n+sumOfNno2(n-1);
}
int main(){
    cout << "Enter : ";
    int n,sum;
    cin >> n;
    cout << sumOfNno2(n);
}