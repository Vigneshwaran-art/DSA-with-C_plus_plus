#include<bits/stdc++.h>
using namespace std;
vector <int> intersection(vector<int>arr1,int n,vector <int>arr2,int m){
    int i=0,j=0;
    vector <int> result;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            result.emplace_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]) {
            i++;
        }
        else j++;
    }
    return result;
}
int main(){
    vector <int> arr1={1,2,2,3,3,4,5,6} , arr2={2,3,3,5,6,6,7};
    int n=arr1.size();
    int m=arr2.size();
    intersection(arr1,n,arr2,m);
}