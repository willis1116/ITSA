#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        int r = 0;
        for(int i = a; i <= b; i++)
        {
            if(i % 2 != 0)
            {
                r = r + i;
            }
        }
        cout << r << endl;
    }
    return 0;
}
