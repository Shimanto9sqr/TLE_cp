#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
}
int main()
{
    ll t;
    cin >> t;
    
    for(int it=1;it<=t;it++) {
        int n,check=0,dot_count=0;
        cin>>n;
        string cell;
        cin>>cell;  
        for(int i=0;i<n;i++){
            
            if(cell[i]=='.'){
                 dot_count++;
                 check++;
                 if(check==3){
                    break;
                 }
            }
            else if(cell[i]=='#'){
                 check=0;
            }
        }
        if(check==3){
            cout<<2<<endl;
        }
        else{
            cout<<dot_count<<endl;
        }
    }


    return 0;
}