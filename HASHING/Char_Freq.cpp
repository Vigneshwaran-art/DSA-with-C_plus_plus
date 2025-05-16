#include<bits/stdc++.h>
using namespace std;
int m1(string s , char c){//Brute force
    int count=0,n=s.length();
    for(int i=0;i<n;i++){
        if (s[i]==c) count ++; 
    }
    return count;
}
int m2(string s,char c){//Using Hashing
    int hash[256]={0};
    int n=s.length();
    for(int i=0;i<n;i++){
        hash[s[i]]++;
    }
    return hash[c];
}
int main(){
    cout << "Enter : ";
    string s="Got a strong eye contact from cat";
    //getline(cin,s);
    char c;
    cin >> c;
    cout << m2(s,c);
}