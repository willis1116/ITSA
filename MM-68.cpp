#include <iostream>
using namespace std;

int main()
{
    int a, b, L, i;
    while(cin >> a >> b >> L)
    {
        if(a < b)
        {
            for(i = a; i > 0; i--)
            {
                if(b % i == 0 && a % i == 0 && i <= L)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
        else
        {
            for(i = b; i > 0; i--)
            {
                if(b % i == 0 && a % i == 0 && i <= L)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
