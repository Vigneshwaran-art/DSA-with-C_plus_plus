#include<bits/stdc++.h>
using namespace std;
void rec_bubble(vector <int> &a,int n){
    if(n==0) return;
    int i=0;
    while(i<n){
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
        }
        i++;
    }
    rec_bubble(a,n-1);
}
int main(){
    vector <int> a ={13,46,24,52,20,9};
    int n=a.size()-1;
    rec_bubble(a,n);
    for(auto i:a){
        cout << i << " ";
    }
}