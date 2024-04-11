#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 

int main()
{
    ll t;
    cin >> t;
    while(t--) {
      ll n,btmask=0,size=0;
      cin>>n;
      vector<ll> arr;
      for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        btmask=a^btmask;
        size++;
      }
      if(size%2==0){
          btmask==0?cout<<37<<'\n':cout<<-1<<'\n';
      }
      else{
        cout<<btmask<<'\n';
      }
    }
    return 0;
}