#include<bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n){ // Changed for brute to optimal
    int sum=0;
    for (int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0) {
                 sum += j;
                 if(i/j!=j)  sum+=i/j;
            }
        }
    }
    return sum;
}

int main(){
    cout << "Enter : ";
    int n;
    cin >> n;
    cout << sumOfDivisors(n);
}