#include<bits/stdc++.h>
using namespace std;

/*int 1toN(int n){
    vector<int>v;
    if(n==0){
        sort(v.begin(),v.end());
        for(int i=0;i<5;i++){
            cout << v[i] << endl;
        }
        return 0;
    }
    v.emplace_back(n);
}*/
int name(int n){
    if(n==0) return 0;
    cout << "CAT" << endl;
    name(n-1);
}
int oneToN(int i,int n){
    if(i>n) return 0;
    cout << i << endl;
    oneToN(i+1,n);
}
int Nto1(int n){
    if(n==0) return 0;
    cout << n << endl;
    Nto1(n-1);
}
int oneToN_2(int n){//Backtracking
    if(n==0) return 0;
    oneToN_2(n-1);
    cout << n << endl;
}
int Nto1_2(int i,int n){//Backtracking
    if(i>n) return 0;
    Nto1_2(i+1,n);
    cout << i << endl;
}
int main(){
    cout << "Enter : ";
    int n;
    cin >> n;
    oneToN_2(n);
}