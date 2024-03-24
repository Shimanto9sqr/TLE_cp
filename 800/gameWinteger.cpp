#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int game;
    cin>>game;
    int check=10;
    for(int i=1;i<=check;i++){
        check--;
        if(i%2!=0){
            if(game%3==1){
               cout<<"First"<<endl;
               break;
            }
        else if(game%3==2){
            cout<<"First"<<endl;
            break;
        }
        else{
            cout<<"Second"<<endl;
            break;
             
        }
        }
        else{
            if(game%3==1){
                game-=1;
            }
            else if(game%3==2){
                game+=1;
            }
            else{
                cout<<"First"<<endl;
                break;
            }
        }
        
    }
    if(check==0){
        cout<<"Second"<<endl;
        return;
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
    // This is an extreme precise thinking.I should have!
    // while(test--)
    // {
    //     cin>>n ;
 
    //     if(n%3==0)
    //     {
    //         cout<<"Second\n" ;
    //     }
    //     else
    //     {
    //         cout<<"First\n" ;
    //     }
    // }
