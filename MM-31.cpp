#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{

    int num,j,r,n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>num;
        r = 1;
        for(j = num; j > 0; j--)
        {
            r = r * j;
        }
        cout << r << endl;
    }
    return 0;
}
