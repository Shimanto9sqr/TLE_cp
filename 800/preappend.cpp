#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n;
    cin>>n;
    string bin;
    cin>>bin;
    int st=0;
    int en=n-1;
    while(n!=0){
        if(bin[st]==bin[en]){
            break;
        }
        else{
            n-=2;
        }
        st++;
        en--;
    }
    cout<<n<<'\n';
    return;
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