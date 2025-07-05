#include <iostream>
using namespace std;
int main()
{
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (m > n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (n - m) << endl;
        }
    }
    return 0;
}

/*  [Best Solution]
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        cout << max(0, n - m) << endl;
    }
}*/
