#include <iostream>
using namespace std;

void pattern1(int n)
{
    int l, i;
    string pat = "*", fin;
    for (i = 0; i < n; i++)
    {
        for (l = 0; l < n; l++)
        {
            fin = fin + pat;
        }
        cout << fin << endl;
        fin = "";
    }
    cout << "End of pattern 1" << endl;
}
void pattern2(int n)
{
    int l, i;
    string pat = "*", fin;
    for (l = 0; l < n; l++)
    {
        fin = fin + pat;
        cout << fin << endl;
    }
    cout << "End of pattern 2" << endl;
}
void pattern3(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int l = 1; l < i + 1; l++)
        {
            cout << l;
        }
        cout << endl;
    }
    cout << "End of pattern 3" << endl;
}
void pattern4(int n)
{
    int i, l;
    int t = 1;
    for (i = 1; i < n + 1; i++)
    {
        for (l = 1; l < i + 1; l++)
        {
            cout << t;
        }
        t = t + 1;
        cout << endl;
    }
    cout << "End of pattern 4" << endl;
}
void pattern5(int n)
{
    int i, l;
    string pat = "*", fin;
    for (i = 0; i < n; i++)
    {
        for (l = 0; l < n - i; l++)
        {
            fin = fin + pat;
        }
        cout << fin << endl;
        fin = "";
    }
    cout << "End of pattern 5" << endl;
}
void pattern6(int n)
{
    int i, l, x;
    x = n;
    for (i = 0; i < n; i++)
    {
        for (l = 1; l <= x; l++)
        {
            cout << l;
        }
        x = x - 1;
        cout << endl;
    }
    cout << "End of pattern 6" << endl;
}
void pattern7(int n)
{
    int i, l, t, x;
    string pat = "*", spac, fin = "*";
    x = n;
    for (i = 1; i <= n; i++)
    {
        for (l = 0; l < x - 1; l++)
        {
            spac = spac + " ";
        }
        x = x - 1;
        for (t = 1; t < i; t++)
        {
            fin = pat + fin + pat;
        }
        cout << spac + fin + spac << endl;
        fin = "*";
        spac = "";
    }
    cout << "End of pattern 7" << endl;
}
void pattern8(int n)
{
    int i, l, t, x;
    string pat = "*", spac, fin = "*";
    x = n;
    for (i = 1; i <= n; i++)
    {
        for (l = 1; l < i; l++)
        {
            spac = spac + " ";
        }
        for (t = 0; t < x - 1; t++)
        {
            fin = pat + fin + pat;
        }
        x = x - 1;
        cout << spac + fin + spac << endl;
        fin = "*";
        spac = "";
    }
    cout << "End of pattern8" << endl;
}
void pattern9(int n)
{
    int i, l, t, x;
    string pat = "*", spac, fin = "*";
    x = n;
    for (i = 1; i <= n; i++)
    {
        for (l = 0; l < x - 1; l++)
        {
            spac = spac + " ";
        }
        x = x - 1;
        for (t = 1; t < i; t++)
        {
            fin = pat + fin + pat;
        }
        cout << spac + fin + spac << endl;
        fin = "*";
        spac = "";
    }
    x = n;
    for (i = 1; i <= n; i++)
    {
        for (l = 1; l < i; l++)
        {
            spac = spac + " ";
        }
        for (t = 0; t < x - 1; t++)
        {
            fin = pat + fin + pat;
        }
        x = x - 1;
        cout << spac + fin + spac << endl;
        fin = "*";
        spac = "";
    }
    cout << "End of pattern 9" << endl;
}
void pattern10(int n)
{
    int i, l, x;
    string pat = "*", fin;
    x = n - 1;
    for (i = 0; i < n; i++)
    {
        fin = fin + pat;
        cout << fin << endl;
    }
    fin = "";
    for (i = 0; i < x; i++)
    {
        for (l = 0; l < x - i; l++)
        {
            fin = fin + pat;
        }
        cout << fin << endl;
        fin = "";
    }
    cout << "End of pattern 10" << endl;
}
void pattern11(int n)
{
    int i, l;
    string p = "0", r = "1", fin;
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            fin = r + fin;
        }
        else
        {
            fin = p + fin;
        }
        cout << fin << endl;
    }
    cout << "End of pattern 11" << endl;
}
int main()
{
    int n;
    cout << "Enter the value for n:";
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
}