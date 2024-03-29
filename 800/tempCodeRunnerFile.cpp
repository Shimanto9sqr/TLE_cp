#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n,k; bool isExist= false;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(k=arr[i]){
            isExist= true;
            break;
        }
    }
    if(isExist){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }

    return;
}
int main()
{
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}