#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    int copy;
    k=k%n;
    for(int j=0;j<k;j++){
        copy=arr[0];
        for(int i=0;i<n;i++){
            if(i+1==n) arr[i]=copy;
            else arr[i]=arr[i+1];
        }
    }
    return arr;
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
    int k;
    cin >> k;
    rotateArray(arr,k);
}