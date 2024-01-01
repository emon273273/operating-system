#include<iostream>
using namespace std;

int main()
{
    int ms, bs, nob, ef,n, mp[10],tif=0;
    int i,p=0;

    cout << " Enter the total memory available (in Bytes) −− ";
    cin >> ms;  // This line was missing

    cout << " Enter the block size (in Bytes) −− ";
    cin >> bs;

    nob=ms/bs;
    ef=ms - nob*bs;
    cout << "\n Enter the number of processes −− ";
    cin >> n;
    cout << "\n";

    for(i=0; i<n; i++)
    {
        cout << " Enter memory required for process " << i+1 << " (in Bytes) −− ";
        cin >> mp[i];
    }

    cout << "\n No. of Blocks available in memory −− " << nob;
    cout << "\n\n PROCESS\tMEMORY REQUIRED\t ALLOCATED\tINTERNAL FRAGMENTATION";

    for(i=0; i<n && p<nob; i++)
    {
        cout << "\n \t" << i+1 << "\t\t\t\t" << mp[i];

        if(mp[i] > bs){
            cout << "\t\t\t NO\t\t---";
        }
        else
        {
            cout << "\t\t\t YES\t\t" << bs-mp[i];
            tif = tif + bs-mp[i];
            p++;
        }
    }

    if(i<n)
        cout << "\n\n Memory is Full, Remaining Processes cannot be accommodated";
    cout << "\n\n Total Internal Fragmentation is " << tif;
    cout << "\n Total External Fragmentation is " << ef;

    return 0;
}
