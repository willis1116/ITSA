#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
#include <cmath>
using namespace std;

int main() {
     int num ,counts;

    while(cin>>num)
    {
        counts=0;
        if(num != 0)
        {
            for(int i = 1;i < num;i++)
            {
                int c = 0;
                for(int j = 1;j <= i;j++)
                {
                    if(i % j == 0)
                    {
                        c++;
                    }
                }
                if(c == 2 && num != 1)
                {
                    counts++;
                }
            }
            cout << counts << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
