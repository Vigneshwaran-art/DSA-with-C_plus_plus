#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(int n,int arr[]){
    vector<int> res={arr[n-1]};
    int c_max=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=c_max){
            c_max=arr[i];
            res.insert(res.begin(),c_max);
        }
    }
    return res;
}
int main(){
    int arr[]={10,4,2,4,1};
    vector<int> result = leaders(5,arr);
    for(auto i: result) cout << i << " ";
}