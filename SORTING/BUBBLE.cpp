#include<bits/stdc++.h>
using namespace std;
int bubble(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int didswap=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
            if(didswap ==0) break; 
        }
    }
    for(auto it : arr){
        cout << it << " ";
    }
}
int main(){
    cout << "Enter : ";
    int n;
    cin >> n;
    int a[n];
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin >> a[i];
        arr.emplace_back(a[i]);
  }
  bubble(arr,n);
}