#include <iostream>
#include <linq/aggregate.hpp>
#include <linq/query.hpp>

using namespace std;
using namespace linq;

int main()
{
    int a1[]{ 1, 2, 3, 4, 5, 6 };
    int a2[]{ 1, 3, 5, 2, 4, 6 };
    auto e{ a1 >> where([](int& a) { return a % 2 != 0; }) >> concat(a1 >> where([](int& a) { return a % 2 == 0; })) };
    if (e >> equals(a2))
    {
        cout << "Success." << endl;
    }
    return 0;
}
