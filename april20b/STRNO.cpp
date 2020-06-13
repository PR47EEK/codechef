/********jai mata di***********/
/*FOLLOW ME ON INSTA _prateek__17*/

#include<bits/stdc++.h>
using namespace std;
int primeFactors(int n)
{
    int k=0;
    while (n % 2 == 0)
    {
        k+=1;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            k=k+1;
            n = n/i;
        }
    }
    if (n > 2)
        k=k+1;
    return k;
}

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int x,k;cin>>x>>k;
    if(primeFactors(x)>=k)
    cout<<1<<endl;
    else cout<<0<<endl;
  }
  return 0;
}
