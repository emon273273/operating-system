#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ms, n, mp[10], tif = 0;
    int i, p = 0;

   
    int blocks[10] ; // Block sizes

    cout<<"enter the number of blocks"<<endl;

    cin>>n;
    //n = 4; // Number of processes

    for(int i=0;i<n;i++){

        cout<<"enter the number of block size"<<i<<endl;
        cin>>blocks[i];
       
    }

    cout<<"enter the number of process"<<endl;

    cin>>p;

    for(int i=0;i<p;i++){

        cout<<" memory required for process "<<i<<endl;
         cin>>mp[i];
    }

    
    // mp[0] = 275; 
    // mp[1] = 400; 
    // mp[2] = 290; 
    // mp[3] = 293; 

    cout << "\n\n PROCESS\t process size \t ALLOCATED\tINTERNAL FRAGMENTATION";

    for (i = 0; i < n; i++)
    {
        cout << "\n\t" << i + 1 << "\t" << mp[i];

        if (mp[i] > blocks[i])
        {
            cout << "\t\t NO\t\t−−−";
        }
        else
        {
            cout << "\t\t YES\t\t" << blocks[i] - mp[i];
            tif = tif + blocks[i] - mp[i];
        }
    }

    cout << "\n\n Total Internal Fragmentation is " << tif;

    return 0;
}
