#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n,int num,vector <int> &arr){
    for(int i=0;i<n;i++){
        if(arr[i]==num) return i;
    }
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
    int num;
    cin >> num;
    cout << num << " is Found at index " << linearSearch(n,num,arr) ;
}