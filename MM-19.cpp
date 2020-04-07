#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int i, n, a, b, c, mvol = 0, msur = 0, vol, sur;
    cin >> n;
    double r, minmum = 125000;
    for(i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        vol = a*b*c;
        sur = (a*b+b*c+a*c)*2;
        r = (double)sur/(double)vol;
        if(r < minmum)
        {
            minmum = r;
            mvol = vol;
            msur = sur;
        }
    }

    for( i = 2; i < mvol; i++)
    {
        if(mvol % i == 0 && msur % i == 0)
        {

            while(mvol % i == 0 && msur % i == 0)
            {
                mvol = mvol / i;
                msur = msur / i;
            }

        }
    }
    cout << msur << "/" << mvol << endl;
    return 0;
}
