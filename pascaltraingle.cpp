#include <bits/stdc++.h>
#define ll long long
vector<vector<long long int>> printPascal(int n) 
{
  
  vector<vector<ll>> res(n);
  for(int i=1;i<=n;i++){
	//corner elements are 1
    ll c=1;
    for (int j=1;j<=i;j++){
      res[i-1].push_back(c);
      c=c*(i-j)/j;
    }
  }
  return res;

}
