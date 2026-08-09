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
void pattern12()
{
    int n;
    cout << "Enter the value of n for pattern 12:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << "\n";
    }
}
void pattern13()
{
    int n;
    cout << "Enter the value of n for pattern 13:";
    cin >> n;
    int l = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << l << " ";
            l++;
        }
        cout << "\n";
    }
}
void pattern14()
{
    int n;
    cout << "Enter the value of n for pattern 14:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(j + 64);
        }
        cout << "\n";
    }
}
void pattern15()
{
    int n;
    cout << "Enter the value of n for pattern 15:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << char(j + 65);
        }
        cout << "\n";
    }
}
void pattern16()
{
    int n;
    cout << "Enter the value of n for pattern 16:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(i + 65);
        }
        cout << "\n";
    }
}
void pattern17()
{
    int n;
    cout << "Enter the value of n for pattern 17:";
    /*  hardest one yet from all the one i have solved try doing it again
        with no variable and can be taken little inspiration from pattern
        12                                                                  */
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int l = 64;
        for (int j = 1; j < 2 * i; j++)
        {
            if (j <= i)
            {
                cout << char(j + 64);
            }
            else
            {
                cout << char(l + i - 1);
                l--;
            }
        }
        cout << "\n";
    }
}
void pattern18()
{
    int n;
    cout << "Enter the vallue of n for pattern 18:";
    /* i have done using different approach then striver */
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(64 + n + j - i);
        }
        cout << "\n";
    }
}
void pattern19()
{
    int n;
    cout << "Enter the value of n for pattern 19:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern20()
{
    int n;
    cout << "Enter the value of n for pattern 20:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern21()
{
    int n;
    cout << "Enter the value of n for pattern 21:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            cout << "*";
            for (int j = 0; j < n - 2; j++)
            {
                cout << " ";
            }
            cout << "*\n";
        }
    }
}
void pattern22()
{
    int n;
    cout << "Enter the value of n for pattern 22:";
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            int temp_i = i;
            int temp_j = j;
            if (i >= n)
                temp_i = 2 * n - 2 - i;
            if (j >= n)
                temp_j = 2 * n - 2 - j;
            int sub = min(temp_i, temp_j);
            cout << n - sub << " ";
        }
        cout << "\n";
    }
}
void pattern222()
{
    int n;
    cout << " Enter the value of n for pattern 222:";
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int tempi = i;
            int tempj = j;
            if (i > n)
            {
                tempi = 2 * n - 1 - i - 1;
            }
            if (j > n)
            {
                tempj = 2 * n - 1 - j - 1;
            }
            cout << n - min(tempi, tempj);
        }
        cout << "\n";
    }
}
int main()
{
    pattern222();
}