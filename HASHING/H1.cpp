#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter : " << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
    int Hash[20]={0};
    for(int i=0;i<n;i++){
        Hash[arr[i]]+=1;
    }
    cout << "Enter the Element : "   ;
    int m;
    cin >> m;
    cout << Hash[m];
}