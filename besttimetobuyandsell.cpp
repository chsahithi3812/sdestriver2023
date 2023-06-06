#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int  buy=prices[0];
    int pr=0;
    for(int i=1;i<n;i++){
      int cost=prices[i]-buy;
      pr=max(pr,cost);
      buy=min(buy,prices[i]);
    }
    return pr;
}
