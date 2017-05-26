/// input array must be sorted
/// input array must be sorted
/// input array must be sorted
/// input array must be sorted

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int data[],int i,int n,int x)
{
    if(i<=n)
    {
        int m=i+(n-i)/2;
        if(data[m]==x)
            return m;
        if(data[m]<x)
            return BinarySearch(data,m+1,n,x);
        if(data[m]>x)
            return BinarySearch(data,i,m-1,x);
    }
    return -1;
}

int main()
{
    int len;
    while(cin>>len)
    {
        int data[len];
        for(int i=0;i<len;i++)
            cin>>data[i];
        int x;
        cout<<"Enter search element: "; cin>>x;
        int result = BinarySearch(data,0,len-1,x);
        if(result==-1)
            puts("Sorry No result Found");
        else
            cout<<"Yes! at: "<<result+1<<endl; /// as indexing start from 0 in c so for looking better i add 1 with result
    }
}
