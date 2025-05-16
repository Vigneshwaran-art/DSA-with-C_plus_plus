#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n){
    int lar=arr[0];
    for(int i=0;i<n-1;i++){
        if(lar<arr[i+1]){
            lar=arr[i+1];
        }
    }
    return lar;
}
int main(){
    cout << "Enter : " << endl;
    int n;
    cin >> n;
    int a[n];
    vector <int> arr;
    for(int i=0;i<n;i++){
        cin >> a[i];
        arr.emplace_back(a[i]);
    }
    largestElement(arr,n);
}