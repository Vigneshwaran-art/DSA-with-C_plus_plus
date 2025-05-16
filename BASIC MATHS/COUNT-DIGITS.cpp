#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n1,rem=0,count=0;
    cin >> n;
    n1=n;
    while(n>0) {
        rem=n%10;
        if(rem!=0 && n1%rem==0 ){
            count+=1;
        }
        n=n/10;
    }
    cout << count;
    return 0;
}