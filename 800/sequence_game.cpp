#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
       ll len;
       cin>>len;
       vector<ll> seq;
       for(int i=0;i<len;i++){
           int a;
           cin>>a;
           if(i>=1 && seq.back()>a){
              seq.push_back(a==1?1:a-1);
              seq.push_back(a);
           }
           else{
            seq.push_back(a);
           }                
       }
       cout<<seq.size()<<endl;
       for(int k=0;k<seq.size();k++){
           cout<<seq[k]<<" ";
       }
       cout<<'\n';
    }
    return 0;
}