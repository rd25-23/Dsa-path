#include <iostream>
using namespace std;
void pattern1()
{
    int i, j, n;
    cout << "Enter the value of n for pattern 1:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern2()
{
    int i, j, n;
    cout << "Enter the value of n for pattern 2:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern3()
{
    int n;
    cout << "Enter the value of n for pattern 3:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4()
{
    int n;
    cout << "Enter the value of n for pattern 4:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
void pattern5()
{
    int n;
    cout << "Enter the value of n for pattern 5:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern6()
{

    int n;
    cout << "Enter the value of n for pattern 6:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
void pattern7()
{
    int n;
    cout << "Enter the value of n for pattern 7:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern8()
{
    int n;
    cout << "Enter the value of n for pattern 8:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (n * 2) - (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern9()
{
    int n;
    cout << "Enter the value of n for pattern 9:";
    cin >> n;
    // we should have called pattern8() and pattern9() here instead
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (n * 2) - (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern10()
{
    int n;
    cout << "Enter the value of n for pattern 10:";
    cin >> n;
    // my way;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern10_2ndway()
{
    int n;
    cout << "Enter the value of n for pattern 10 2nd version:";
    cin >> n;
    /* not good method we have to use if, define a new variable , think extra and
    still big o is same as the 1st way which is way easier to think and write and
    understand*/

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern11()
{
    int n;
    cout << "Enter the value of n for pattern 11:";
    cin >> n;
    int start = 1;
    // sir way
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << "\n";
    }
}
void pattern11_2ndway()
{
    int n;
    cout << "Enter the value of n for pattern 11 2nd version:";
    cin >> n;
    string fin, r = "1", p = "0";
    // my way
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            fin = r + fin;
        }
        else
        {
            fin = p + fin;
        }
        cout << fin << "\n";
    }
}
int main()
{
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    pattern10();
    pattern10_2ndway();
    pattern11();
    pattern11_2ndway();
}