#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	int mx=n/2;
	int ans=-1;
	for(auto it : mp){
		if(it.second>mx && mx!=it.second){
			mx=it.second;
			ans=it.first;
		}
	}
	return ans;

}