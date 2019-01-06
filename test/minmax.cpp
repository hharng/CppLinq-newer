#include <iostream>
#include <linq/aggregate.hpp>

using namespace std;
using namespace linq;

int main()
{
    int a1[]{ 3, 4, 2, 6, 1, 5 };
    auto min{ a1 >> limit<int>(less<int>{}) };
    auto max{ a1 >> limit<int>(greater<int>{}) };
    if (min == 1 && max == 6)
    {
        cout << "Success." << endl;
    }
    return 0;
}
