#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

//This coding style from youknowwhon is pretty good.
//Used minimal approach, though declaring vector was not that necessary
//the simplicity of this problem should detect earlier

// #include<bits/stdc++.h>
// using namespace std;
 
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while (t--) {
//     int n; cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     if (a[0] == 1) {
//       cout << "YES\n";
//     }
//     else {
//       cout << "NO\n";
//     }
//   }
//   return 0;
// }