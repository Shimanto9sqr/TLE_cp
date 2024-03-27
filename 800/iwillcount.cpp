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
    for (int it = 1; it <= t; it++)
    {
        int n, m, count = 0;
        string x, s;
        bool check = true;
        cin >> n >> m;
        cin >> x >> s;
        while (x.find(s) == std::string::npos)
        {
            if (x.length() > n*m)
            {
                check = false;
                break;
            }
            x = x.append(x);
            count++;
           
        }
        if (check)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}

// TLE er peray porlam, checking condition optimize korte holo!