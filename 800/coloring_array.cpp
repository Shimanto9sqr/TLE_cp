#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n, sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    sum%2==0?cout<<"YES":cout<<"NO";
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