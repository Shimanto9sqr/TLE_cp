#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        int n, c1 = 0, c2 = 0;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (arr[0] == arr[n - 1])
        {
            cout <<"YES"<<endl;;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == arr[0])
                {
                    c1++;
                }
                else if (arr[n - 1] == arr[i])
                {
                    c2++;
                }
            }
            if (c1 + c2== n)
            {
                if (abs(c1 - c2) == 1 || c1 - c2 == 0)
                {
                    cout << "YES"<<endl;
                }
                else
                {
                    cout << "NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        
    }
    return 0;
}

// ekhane map er use ta joss, the actuall array elements are using like a key value of the map, and based on that when the key appears
// we count that!! Noice
//  std::map<int ,int> occ;
//     for (int i = 1; i <= n; ++i) {
//       int x;
//       std::cin >> x;
//       occ[x]++;
//     }
//     if (occ.size() >= 3) puts("No");
//     else {
//       if (std::abs(occ.begin()->second - occ.rbegin()->second) <= 1) {
//         puts("Yes");
//       } else {
//         puts("No");
//       }
//     }