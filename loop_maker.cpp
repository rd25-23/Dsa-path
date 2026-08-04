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
int main()
{

    pattern8();
}