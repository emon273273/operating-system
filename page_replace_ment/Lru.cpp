#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, position, k, l;
    int a = 0, b = 0, page_fault = 0;

    int total_frames;
    int frames[total_frames];
    int temp[total_frames];
     int total_pages;
    int pages[100] ;
 cout<<"Enter number of frames"<<endl;
 cin>>total_frames;

 cout<<"enter number of pages"<<endl;

 cin>>total_pages;

 for(int i=0;i<total_pages;i++){

    cin>>pages[i];
 }
   
    

    for (m = 0; m < total_frames; m++) 
    {
        frames[m] = -1;
    }

    for (n = 0; n < total_pages; n++) 
    {
        cout << pages[n] << ": ";
        a = 0, b = 0;
        for (m = 0; m < total_frames; m++) 
        {
            if (frames[m] == pages[n]) 
            {
                a = 1;
                b = 1;
                break;
            }
        }
        if (a == 0) 
        {
            for (m = 0; m < total_frames; m++) 
            {
                if (frames[m] == -1) {
                    frames[m] = pages[n];
                    cout<<"page fault for "<<frames[m]<<endl;
                    b = 1;
                    page_fault++;
                    break;
                }
            }
        }
        if (b == 0) 
        {
            for (m = 0; m < total_frames; m++) 
            {
                temp[m] = 0;
            }
            for (k = n - 1, l = 1; l <= total_frames - 1; l++, k--) 
            {
                for (m = 0; m < total_frames; m++) 
                {
                    if (frames[m] == pages[k]) 
                    {
                        temp[m] = 1;
                    }
                }
            }
            for (m = 0; m < total_frames; m++) 
            {
                if (temp[m] == 0)
                    position = m;
            }
            frames[position] = pages[n];
            cout<<"page fault for"<<frames[position]<<endl;
            page_fault++;
        }

        for (m = 0; m < total_frames; m++) 
        {
            cout << frames[m] << "\t";
        }
        cout <<endl;
    }
    cout << "\nTotal Number of Page Faults:\t" << page_fault << std::endl;
    return 0;
}