#include <bits/stdc++.h> 
bool checkDiff(int *arr,int N,int K)
{
   
     std::unordered_set<int> seen;

    for (int i = 0; i < N; ++i) {
        int element = arr[i];
        if (seen.count(element - K) || seen.count(element + K)) {
            return true;
        }
        seen.insert(element);
    }

    return false;
}
