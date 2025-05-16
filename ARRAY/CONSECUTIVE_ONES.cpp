#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int> &a,int n){
    int seq=0,seq1=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            seq++;
        }
        else{
            if(seq>seq1){
                seq1=seq;
            }
            seq=0;
        }
    }
    if(seq>seq1) seq1=seq;
    return seq1;
}
int traffic(int n,int m,vector<int> vechicle){
    int seq=0,seq1=0;
    for(int i=0;i<=m;i++){
        if(vechicle[i]==0) vechicle[i]=1;
    }
    for (auto i: vechicle){
        cout << i << " ";
    }
    for(int i=0;i<n;i++){
        if(vechicle[i]==1){
            seq++;
        }
        else{
            if(seq>seq1){
                seq1=seq;
            }
            seq=0;
        }
    }
    if(seq>seq1) seq1=seq;
    return seq1;
}
int main(){
    vector<int> a={0,1,0,0,1,0};
    int n = a.size();
    int m=3;
    //cout << consecutiveOnes(a,n);
    cout << traffic(n,m,a);
}