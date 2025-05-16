#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello Cat,That was Good";
    int n=s.size();
    map<char,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    for(auto it : m){
        cout << it.first << "->" << it.second << endl;
    }
}