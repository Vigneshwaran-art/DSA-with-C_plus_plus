#include<bits/stdc++.h>
using namespace std;
void sortArray(vector<int> &arr,int n){
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) cnt0++;
        else if(arr[i]==1) cnt1++;
        else cnt2++;
    }
    for(int j=0;j<cnt0;j++) arr[j]=0;
    for(int i=cnt0;i<cnt0+cnt1;i++) arr[i]=1;
    for(int i=cnt0+cnt1;i<cnt0+cnt1+cnt2;i++) arr[i]=2;
    for(auto i:arr) cout << i << " ";
}
int main(){
    vector <int> arr={0,0,2,1,2,0,2,1};
    int n=arr.size();
    sortArray(arr,n);
}