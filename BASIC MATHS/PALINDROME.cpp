#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
   int n1,rem=0,cal=0;
        n1=n;
        while(n>0){
          rem = n%10;
          cal = cal * 10 + rem;
          n=n/10;
       }
       if(cal == n1)  return true;
       return false;
}

int main(){
	int n;
   cout << "Enter : ";
   cin >> n;
   palindrome(n);
}
