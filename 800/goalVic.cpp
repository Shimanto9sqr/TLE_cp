#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n,totality=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        totality+=a;
    }
    cout<<(-1*totality)<<endl;
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