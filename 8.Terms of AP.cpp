#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int> ans;

    int count = 0;

    int i=1;

    while(count != x){

     int term = (3*i)+2;

     if(term%4 == 0 ){

        i++;

     }

     else{

        ans.push_back(term);

        i++;

        count++;

    }

    }

  return ans;
}
