#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int mx=arr[0];
	int mn=arr[0];
	for(int i=0;i<n;i++)
	{
		mn=min(mn,arr[i]);
		mx=max(mx,arr[i]);
	}
	return mn+mx;
}
