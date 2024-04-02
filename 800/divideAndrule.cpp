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
        int n;
        cin>>n;
        vector<int> arr,brr,crr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());    
 
        for(int j=0;j<n;j++){
            if(arr[j]%arr[n-1]==0){
                  crr.push_back(arr[j]);
            }
            else{
                brr.push_back(arr[j]);
            }
        }
        if(brr.empty()){
            cout<<-1<<'\n';
        }
        else{
            cout<<brr.size()<<" "<<crr.size()<<'\n';
            for(int k=0;k<brr.size();k++){
                cout<<brr[k]<<" ";
            }
            cout<<'\n';
            for(int l=0;l<crr.size();l++){
                cout<<crr[l]<<" ";
            }
        //    for(int x: B) cout << x << " "; cout << "\n"; print vector like this
        //    for(int x: C) cout << x << " "; cout << "\n";
             cout<<'\n';
        }
    }
    return 0;
}