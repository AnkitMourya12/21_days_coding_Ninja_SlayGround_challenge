vector<int> countFrequency(int n, int x, vector<int> &nums){

    vector<int> hash(n,0);

    for(int i=0;i<nums.size();i++){

        hash[nums[i]-1]++;

    }

    return hash;

 

}
