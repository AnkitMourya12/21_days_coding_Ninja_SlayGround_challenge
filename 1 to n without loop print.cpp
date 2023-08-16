
   int recursion(int x, vector<int>&v)
{
    if(x==1)
    {
        v.push_back(1);
        return 1;
    }
    recursion(x-1,v);
    v.push_back(x);
}

vector<int> printNos(int x) {
    vector<int> v;
    recursion(x,v);

    return v;
}
