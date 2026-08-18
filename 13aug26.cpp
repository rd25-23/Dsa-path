// pairs
#include <iostream>
using namespace std;

void pairexplain()
{
     pair<int, int> p = {1, 2};
     cout << p.second << "\n"
          << "first done";

     pair<int, pair<int, pair<int, int>>> o = {1, {2, {3, 4}}};
     cout << o.first << "\n"
          << o.second.second.second << "\n"
          << o.second.second.first;
}

void vectorexpalin()
{

     vector<int> v;
     v.push_back(1);
     v.emplace_back(4);
     cout << v[0] << "\n"
          << v[1] << "\n";
     cout << "end of 1st vector\n";

     vector<pair<int, int>> v2;
     v2.emplace_back(69, 4);
     cout << v2[0].first << "\n"
          << v2[0].second << "\n";
     cout << "end of 2nd vector\n";

     vector<int> v3;
     v3.emplace_back(3);
     v3.emplace_back(5);
     vector<int>::iterator it = v3.begin();
     cout << *it << "\n";
     it++;
     cout << *it << "\n";
     it = it + 1;
     cout << *it << "\n";
     cout << "end of 3rd vector\n";

     vector<int> v4;
     v4.emplace_back(7);
     v4.emplace_back(9);
     vector<int>::iterator sit = v4.end();
     cout << *sit << "\n";
     sit--;
     cout << *sit << "\n";
     sit = sit - 1;
     cout << *sit << "\n";
     cout << "end of 4th vector\n";

     vector<int> v5;
     v5.emplace_back(10);
     v5.emplace_back(12);
     v5.emplace_back(14);
     v5.emplace_back(16);
     v5.erase(v5.begin() + 2, v5.end() - 1);
     for (int i = 0; i < v5.size(); i++)
     {
          cout << v5[i] << "\n";
     }
}

int main()
{
     vectorexpalin();
}
