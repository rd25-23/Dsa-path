#include <iostream>
using namespace std;
int main()
{
    int i, l, n;
    int x = n;
    cin >> n;
    string pat = "*", fin;
    for (i = 0; i < n; i++)
    {
        for (l = 0; l < x; l++)
        {
            fin = fin + pat;
        }
        cout << fin << endl;
        fin = "";
        x = x - 1;
    }
    /*  so this is an example of pattern no 5 present in te file name 3rd_pattern.cpp
        we have changed the line 10 form l<x to l < n - i which was given to me by the
        copilot inline suggestions*/

    for (i = 0; i < 5; i++)
    {
        fin = fin + pat;
    }
    cout << fin << endl;

    fin = "";
    for (l = 0; l < 4; l++)
    {
        fin = fin + pat;
    }
    cout << fin << endl;
}