#include <iostream>
#include <list>
using namespace std;
// the only difference between vector and list is that vecotr only supports back operation while list supports both front and back operations
int main()
{
    list<int> ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.push_front(5);
    ls.push_front(2);
    for (int i : ls)
    {
        cout << i << "\n";
    }
}
