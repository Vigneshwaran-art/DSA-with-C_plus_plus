#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) //Brute Force
{
	int count =0;
    if(n==1) return false;
    for (int i=2;i<n;i++){
        if(n%i==0) 
            count++;
    }
    if(count>0)
		 return false;
    else
		 return true;
}

string prime(int n){//Optimal
    int count =0;
    if (n==1) return "No";
    for (int i=2;i*i<n;i++){
        if(n%i==0) 
            return "No";
    }
    return "Yes";
}
int main(){
    cout<<"Enter : ";
    int n;
    cin >> n;
    cout << prime(n);
}