#include<iostream>
#define max 25
using namespace std;

int main()
{
int frag[max],b[max],f[max],i,j,nb,nf,temp;
int bf[max],ff[max];
for(i=0; i<max; i++){
b[i] = 0;
f[i] = 0;
frag[i] = 0;
bf[i] = 0;
ff[i] = 0;
}
cout << "\nEnter the number of blocks:";
cin >> nb;
cout << "Enter the number of files:";
cin >> nf;
cout << "\nEnter the size of the blocks:-\n";
for(i=1; i<=nb; i++)
{
cout << "Block " << i << ":";
cin >> b[i];
}
cout << "Enter the size of the files:-\n";
for(i=1; i<=nf; i++)
{
cout << "File " << i << ":";
cin >> f[i];
}
for(i=1; i<=nf; i++)
{
for(j=1; j<=nb; j++)
{
if(bf[j]!=1)
{
temp=b[j]-f[i];
if(temp>=0)
{
ff[i]=j; // allocate the first block that is large enough
frag[i]=temp; // calculate the internal fragmentation
bf[j]=1; // mark the block as occupied
break; // break the inner loop
}
}
}
}
cout << "\nFile_no \tFile_size \tBlock_no \tBlock_size \tFragment";
for(i=1; i<=nf; i++)
cout << "\n" << i << "\t\t" << f[i] << "\t\t" << ff[i] << "\t\t" << b[ff[i]] << "\t\t" << frag[i];
return 0;
}
