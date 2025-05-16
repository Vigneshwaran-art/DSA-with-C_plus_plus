#include<bits/stdc++.h>
using namespace std;
int pal_str(int n,string s,string r){//BRUTE
    if(n<=0){  
        if(s==r){
            cout << "Palindrome";
        }
        else{
            cout << "Not a Palindrome";
        }
        return 0;
    }
    r=r+s[n-1];
    pal_str(n-1,s,r);
}
bool pal_str2(int i,int n,string s,string s1){//OPTIMAL
    if(i>=n/2) {
        if(s==s1){
            cout << true;
        }
        else{
            cout << false;
        }
    }
    swap(s[i],s[n-i-1]);
    pal_str2(i+1,n,s,s1);
}
int main(){
    cout << "Enter : ";
    string s="",r="";
    cin >> s;
    string s1=s;
    int n=s.size();
    pal_str(n,s,r);
    //pal_str2(0,n,s,s1);
}