#include<bits/stdc++.h>
using namespace std;
int isSorted(int n,vector<int> a){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
int main(){
    cout << "Enter : " << endl;
    int n;
    cin >> n;
    int arr[n];
    vector <int> a;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        a.emplace_back(arr[i]);
    }
    cout<<isSorted(n,a);
}