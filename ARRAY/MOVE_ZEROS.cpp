#include<bits/stdc++.h>
using namespace std;
vector <int> moveZeros(int n,vector<int> a){
    for(int j=0;j<n;j++){
        if(a[j]==0){
            int copy=a[j];
            for(int i=j;i<n;i++){
                if(i+1==n) a[i]=copy;
                else a[i]=a[i+1];
            }
            j--;
            n--;
        }
    }
    return a;
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
    moveZeros(n,a);
}