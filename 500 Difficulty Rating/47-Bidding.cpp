#include <iostream>
using namespace std;
int main()
{
    int a, b, c, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((a > b) && (a > c))
        {
            cout << "Alice" << endl;
        }
        else if ((b > a) && (b > c))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}

/*  [Best Solution]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c;
        d = max(a, max(b, c));
        if (d == a)
            cout << "Alice" << "\n";
        else if (d == b)
            cout << "Bob" << "\n";
        else
            cout << "Charlie" << "\n";
    }
}*/
