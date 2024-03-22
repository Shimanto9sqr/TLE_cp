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
    for(int it=1;it<=t;it++) {
        int n,x;
        cin>>n>>x;
        int a,minV,dist=0;
        vector<int> gasPump;
        for(int i=0;i<n;i++){
            cin>>a;
            gasPump.push_back(a);
            if(i==0){
                dist=gasPump[i];
            }
            else if(i>0 && dist< gasPump[i]-gasPump[i-1]){
                dist=gasPump[i]-gasPump[i-1];  // could have used max()
            }
          
        }
        minV=2*(x-gasPump[n-1]);
        if(minV>dist){
            cout<<minV<<endl;
        }
        else{
            cout<<dist<<endl;
        }
        
    }
    return 0;
}

//  int prev = 0, ans = 0;
//     for (int i = 0; i < n; ++i) {
//       int a; cin >> a;
//       ans = max(ans, a - prev);
//       prev = a;
//     }
//     ans = max(ans, 2 * (x - prev));
//     cout << ans << '\n';