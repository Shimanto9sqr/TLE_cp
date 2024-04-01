#include <bits/stdc++.h>


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, opr;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int op;
        std::cin >> op;
        opr = std::min(opr, abs(op));
    }
    std::cout << opr << std::endl;
    return 0;
}