#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int>v1;
    for(int i=0;i<n;i++){
      if (arr[i]==1){
        v1.push_back(i);
      }
    }
    bool present=true;
    int size=v1.size();
    if (size==1){cout<<"YES"<<endl;}
    else if (size>1){
    for(int i=1;i<size;i++){
      if ((v1[i]-v1[i-1])<6){
        present=false;
        cout<<"NO"<<endl;
        break;
      }
      else if((v1[i]-v1[i-1])>=6){
        present=true;
      }
    }
    if(present==true){cout<<"YES"<<endl;}
  }
}
return 0;
}
