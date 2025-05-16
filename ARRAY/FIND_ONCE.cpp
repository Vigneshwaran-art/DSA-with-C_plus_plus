#include<bits/stdc++.h>
using namespace std;
int findOnce(vector <int> &arr){//better
    int n=arr.size(),maxi=0;
    for (int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    int hash[maxi]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[i]==1){
            return i;
        }
    }
}
int getSingleElement(vector <int> &arr){//optimal
    int exor=0,n=arr.size();
    for(int i = 0 ; i < n ; i++){
        exor = exor ^ arr[i];
    }
    return exor;
}
int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4,5,6,6,7,7,8,8};
    //cout << findOnce(arr);
    cout << getSingleElement(arr);
}