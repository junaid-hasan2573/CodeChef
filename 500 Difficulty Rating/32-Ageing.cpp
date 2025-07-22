#include <iostream>
using namespace std;
int main()
{
    int x, t;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << ((x - 20) + 10) << endl;
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
        cout << x - 10 << '\n';
    }
}*/  
