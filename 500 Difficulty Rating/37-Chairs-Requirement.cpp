#include <iostream>
using namespace std;
int main()
{
    int x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x < y)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (x - y) << endl;
        }
    }
    return 0;
}

/*  [Best Solution]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        cout << max(x - y, 0) << endl;
    }
}*/
