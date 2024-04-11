#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(x==k){
        if(x==1){
            cout<<"NO"<<'\n';
        }
        else{
            int modk1= n%(k-1);
            if(modk1==0){
                cout<<"YES"<<'\n';
                cout<<n/(k-1)<<'\n';
                for(int i=0;i<n/(k-1);i++)cout<<k-1<<" ";
                cout<<'\n';
            }
            else{
                cout<<"YES"<<'\n';
                cout<<(n/(k-1))+1<<'\n';
                for(int i=0;i<n/(k-1);i++)cout<<k-1<<" ";
                cout<<modk1;
                cout<<'\n';
            }
        }
    }
    else{
        int modk=n%k;
        if(modk==0){
            cout<<"YES"<<'\n';
            cout<<n/k<<'\n';
            for(int i=0;i<n/k;i++)cout<<k<<" ";
            cout<<'\n'; 
        }
        else{
            if(modk==x && x==1){
               cout<<"NO"<<'\n'; 
            }
            else if(modk==x){
                cout<<"YES"<<'\n';
                cout<<(n/k)+2<<'\n';
                for(int i=0;i<n/k;i++)cout<<k<<" ";
                 cout<<modk-1<<" "<<1;
                cout<<'\n'; 
            }
            else{
                cout<<"YES"<<'\n';
                cout<<(n/k)+1<<'\n';
                for(int i=0;i<n/k;i++)cout<<k<<" ";
                cout<<modk;
                cout<<'\n';  
            }
        }
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