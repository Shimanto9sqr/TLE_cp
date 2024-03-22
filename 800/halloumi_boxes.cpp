#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
string Sorted(ll arr[], int n){
        if(n==1 || n==0){
            return "YES";
        }
        else{
            if(arr[n-1]<arr[n-2]){
                return "NO";
            }
            else{
                return Sorted(arr,n-1);
            }
        }
}

int main()
{
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        int box,rev_len;  
        cin>>box>>rev_len;
        ll box_arr[box];
       for(int i=0; i<box;i++){
        cin>>box_arr[i];
       }
       for(int i=0; i<box;i++){
        cout<<box_arr[i];
       }
       cout<<endl;
        if(rev_len>=2){
            cout<<"YES"<<endl;
        }
        else{
          cout<<Sorted(box_arr,box)<<endl;     
        }
    }
    return 0;
}