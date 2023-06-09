#include <bits/stdc++.h> 
long long maxSubarraySum(int a[], int n)
{
    long long ans=0;
    long long sum=0;
    for(long long i=0;i<n;i++){
        sum+=a[i];
        if(sum<0){
            sum=0;
        }
        ans=max(ans,sum);
    }
    return ans;
}