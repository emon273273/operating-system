#include <iostream>
using namespace std;

int main()
{
    int ms, n, mp[10], tif = 0;
    int i, p = 0;

    cout << " Enter the total memory available (in Bytes) −− ";
    cin >> ms;

    cout << "\n Enter the number of processes −− ";
    cin >> n;
    cout << "\n";

    for (i = 0; i < n; i++)
    {
        cout << " Enter memory required for process " << i + 1 << " (in Bytes) −− ";
        cin >> mp[i];
    }

    cout << "\n\n PROCESS\tMEMORY REQUIRED\t ALLOCATED\tINTERNAL FRAGMENTATION";

    for (i = 0; i < n; i++)
    {
        cout << "\n \t" << i + 1 << "\t\t\t\t" << mp[i];

        if (mp[i] > ms)
        {
            cout << "\t\t\t NO\t\t−−−";
        }
        else
        {
            cout << "\t\t\t YES\t\t0";
            ms = ms - mp[i];
        }
    }

    if (i < n)
        cout << "\n\n Memory is Full, Remaining Processes cannot be accommodated";
    cout << "\n\n Total Internal Fragmentation is " << tif;
    cout << "\n Total External Fragmentation is " << ms;

    return 0;
}