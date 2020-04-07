#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n, m, r;
    while(cin >> n >> m)
    {
        r = abs(n-m);
        cout << r << endl;
    }
    return 0;
}
