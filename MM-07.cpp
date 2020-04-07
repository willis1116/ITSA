#include<iostream>
#include<string>

using namespace std;

int main()
{
    string n, m;
    bool ok;
    while(cin >> n >> m)
    {
        int counter = 0;
        for(int i = 0; i < m.length(); i++)
        {
            ok = true;
            for(int j = 0; j < n.length() && ok; j++)
                if(m[i+j] != n[j])
                    ok = false;
            if(ok)
                counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
