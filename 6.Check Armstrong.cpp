bool checkArmstrong(int n){
	//Write your code here
	int k=n;
	int rev,s=0;
	 int digits = log10(n) + 1;
	while(n>0)
	{
		rev=n%10;
		s=s+pow(rev,digits);
		n=n/10;
	}
	if(k==s)
	{
      return true;
	}
	return false;
}
