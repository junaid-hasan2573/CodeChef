#include <iostream>
using namespace std;
int main()
{
    int x, t;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if ((x * 4) > 1000)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}

/*  [Best Solution]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x <= 250)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}*/
