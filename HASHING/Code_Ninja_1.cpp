#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,limit;
    cin >> n >> limit;
    int arr[n] = {0};
    int hash[n+1] = {0};
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
        hash[arr[i]]++;
    }
    for(int j=0;j<n;j++){
        cout << j+1 << "  " << hash[j+1] << endl;
    }
}