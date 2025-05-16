#include<bits/stdc++.h>
using namespace std;
int revArr(int i,int a[],int n){
    if(i>=n/2) return 0;
    swap(a[i],a[n-i-1]);
    revArr(i+1,a,n);
}
int main(){
    int a[]={2,5,8,19,43,1};
    int n=6;
    revArr(0,a,n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}