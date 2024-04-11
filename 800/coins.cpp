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
        ll n,k;
        cin>>n>>k;
        int mod= n%k;
        if(n%2==0){
            cout<<"yes"<<'\n';
        }
        else{
          if(k%2!=0){
            cout<<"yes"<<'\n';
          }
          else{
            cout<<"no"<<'\n';
          }
        }
    }
    return 0;
}