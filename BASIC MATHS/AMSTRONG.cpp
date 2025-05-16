#include<bits/stdc++.h>
using namespace std;

bool ams(int n){
    int digits = log10(n)+1;
    cout << digits << endl;
    int n1,rem=0,cal=0;
        n1=n;
        while(n>0){
          rem = n%10;
          cal = cal + pow(rem,digits);
          n=n/10;
       }
    
       if(cal == n1) return true;
    return false;
}
int main(){
    int n;
    cout << " Enter : ";
    cin >> n;
    cout << ams(n);
}