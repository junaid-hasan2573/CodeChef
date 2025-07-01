#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x == 404)
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND" << endl;
    }
    return 0;
}

/*  [Best Solution]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input_str;
    cin >> input_str;
    if (input_str != "404")
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}*/
