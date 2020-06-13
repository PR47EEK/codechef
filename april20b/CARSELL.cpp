#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  //lets see all the cars
  int tt,j= 1000000007;cin>>tt;
  while(tt--){
    int n;cin>>n;
    vector<int>cars;
    for(int i=0;i<n;i++){
    int x;cin>>x;
    cars.push_back(x);}
    sort(cars.begin(),cars.end());
    int add=0,k=0;
    for(int i=0;i<n;i++){
      if((cars[cars.size()-1]-k)>0){
      add=(add%j+(cars[(cars.size()-1)]-k)%j)%j;
      cars.erase(cars.begin()+(cars.size()-1));
      k=k+1;}
        }
  cout<<add<<endl;
  }
  return 0;
}
