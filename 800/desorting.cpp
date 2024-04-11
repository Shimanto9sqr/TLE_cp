#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    ll n; 
    cin>>n;
    ll arr[n]; vector<ll> dif;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0)dif.push_back(arr[i]-arr[i-1]);
    }
    auto op = min_element(dif.begin(),dif.end());
    if(*op<0)cout<<0<<'\n';
    else if(*op==0)cout<<1<<'\n';
    else{
        cout<<(*op/2)+1<<'\n';
    }
}
int main()
{
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}