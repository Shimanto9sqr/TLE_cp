#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d-b>=0 && c-d-a+b<=0){
       cout<<(2*d-2*b+a-c)<<'\n';
    }
    else{
       cout<<-1<<'\n';  
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