/********jai mata di***********/
/*FOLLOW ME ON INSTA _prateek__17*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		unsigned long long int n;cin>>n;
		if(n==1) cout<<n<<"\n"<<1<<" "<<1<<"\n";
		else
		{
    		cout<<n/2<<"\n";
    		unsigned long long int k=1;
    		for(unsigned long long int i=0;i<(n/2-1);i++)
    		{
    			cout<<2<<" "<<k<<" "<<k+1<<"\n";
    			k+=2;
    		}
			if(n%2==0)
			cout<<2<<" "<<k<<" "<<k+1<<"\n";
			else
			cout<<3<<" "<<k<<" "<<k+1<<" "<<n<<"\n";
	}
	}
	return 0;
}

