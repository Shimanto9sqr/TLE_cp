#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n;cin>>n;
    map<int,int>count;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        count[x]++;
    }
    int sum = count[1]-count[-1];
    
    if(sum>=0){
        count[-1]%2==0?cout<<0<<'\n':cout<<1<<'\n';   
    }
    else{
        int abSum=(abs(sum)+1)/2;
        if(abSum%2==0){
            count[-1]%2==0?cout<<abSum<<'\n':cout<<abSum+1<<'\n';   
        }
        else{
            count[-1]%2==0?cout<<abSum+1<<'\n':cout<<abSum<<'\n';  
        }
    }
        
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