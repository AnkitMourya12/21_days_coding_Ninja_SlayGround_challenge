#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	int a;
	vector<vector<int>>ans;
	
	for(int i=s;i<=e;i+=w)
	{
		 a=((i-32)*5)/9;
		ans.push_back({i,a});
		
	}
	
	return ans;


	//type your code here
}
