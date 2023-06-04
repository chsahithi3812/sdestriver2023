#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	//make a vector of pair and store the numbers which have intial zeros
	vector<pair<int,int>> pr;
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			if(matrix[i][j]==0){
               pr.push_back(make_pair(i,j));
			}
		}
	}
	// traverse the vector of pair and make the  corresponding rows and columns to be zero
	for(int i=0;i<pr.size();i++){
      for(int j=0;j<matrix.size();j++){
		  matrix[j][pr[i].second]=0; 
	  }
	   for(int j=0;j<matrix[0].size();j++){
		  matrix[pr[i].first][j]=0;
	  }

	}
	

}
