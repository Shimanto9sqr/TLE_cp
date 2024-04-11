#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n; vector<int>b;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        b.push_back(n-a+1);
    }
    for(auto y:b)cout<<y<<" ";
    cout<<'\n';
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