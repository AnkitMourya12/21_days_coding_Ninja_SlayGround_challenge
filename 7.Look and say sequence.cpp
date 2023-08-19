string lookAndSaySequence(int n) 
{
    // Write your code here.
    if(n==0) return "";
    string r="1";
    while(--n){
        string cur="";
        for(int i=0;i<r.size();i++){
            int count=1;
            while((i+1<r.size())&&(r[i]==r[i+1])){
                count++;
                i++;
            }
            cur+=to_string(count)+r[i];
        }
        r=cur;
    }
    return r;
}
