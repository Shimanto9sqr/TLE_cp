#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    char board[10][10]; int point=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>board[i][j];
            if(board[i][j]=='X' && (i==0||j==0||i==9||j==9)){
                point+=1;
            }
            else if(board[i][j]=='X' && (i==1||j==1||i==8||j==8)){
                point+=2;
            }
            else if(board[i][j]=='X' && (i==2||j==2||i==7||j==7)){
                point+=3;
            }
            else if(board[i][j]=='X' && (i==3||j==3||i==6||j==6)){
                point+=4;
            }
            else if(board[i][j]=='X' && (i==4||j==4||i==5||j==5)){
                point+=5;
            }
        }
    }
    cout<<point<<endl;
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

//jiangly's soln, what an mathematical mind!!

// #include <bits/stdc++.h>
 
// using i64 = long long;
 
// void solve() {
//     int ans = 0;
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 10; j++) {
//             char c;
//             std::cin >> c;
//             if (c == 'X') {
//                 ans += std::min({i + 1, 10 - i, j + 1, 10 - j});
//             }
//         }
//     }
//     std::cout << ans << "\n";
// }
 
// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
    
//     int t;
//     std::cin >> t;
    
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }