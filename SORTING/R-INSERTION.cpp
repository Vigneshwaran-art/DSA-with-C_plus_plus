#include<bits/stdc++.h>
using namespace std;
void r_ins(int i[],int n,int k){
    if(n<=1){
        return ;
    }
    for(int j=k;j>0;j--){
        if(i[j]<i[j-1]){
            swap(i[j-1],i[j]);
        }
    }
    r_ins(i,n-1,k+1);
}
int main(){
    int i[]={95,21,0,222,12};
    int n=sizeof(i)/sizeof(i[0]) , k=1;
    r_ins(i,n,k);
    for(int arr:i){
        cout << arr << " ";
    }
}