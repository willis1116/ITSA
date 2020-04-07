#include <iostream>
using namespace std;

int main()
{
    int na, ma, nc, mc, ns, ms, r;
    while(cin >> na >> ma >> nc >> mc>> ns >> ms)
    {
        int r = na*ma + nc*mc + ns*ms;
        cout << r << endl;
    }
    return 0;
}
