#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices){
    int n= prices.size(),s_el=INT_MAX,m_el=0,loc_s=0,loc_m=0;
    for(int i=0;i<n;i++){
        if(s_el>prices[i]){
            s_el=prices[i];
            loc_s=i;
        }
    }
    if(loc_s+1 != n ){
        for(int j=loc_s+1;j<n;j++){
        if(m_el<prices[j]){
            m_el=prices[j];
            loc_m=j;
        }
    }
    }
    if(m_el==0){
        return 0;
    }
    else {
        return m_el-s_el;
    }
}
int maxProfit_2(vector <int>& prices){
    int n=prices.size(),profit=0,cost=0;
    int mini=prices[0];
    for(int i=1;i<n;i++){
        cost=prices[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,prices[i]);
    }
    return profit;
}
int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout << maxProfit_2(prices);
}