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
       int n,mx=0;
       cin>>n;
       int space=0;
       for(int i=0;i<n;i++){
           int bin;
           cin>>bin;
           if(bin==0){
            space++;
           }
           else{
              mx=max(mx,space);
              space=0;
           }
       }
       mx=max(mx,space);
       cout<<mx<<'\n';
    }
    return 0;
}