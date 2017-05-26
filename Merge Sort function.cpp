#include<bits/stdc++.h>
using namespace std;
void Merge(int data[], int s, int m, int e)
{
    int nl=m-s+1;
    int nr=e-m;
    int l[nl],r[nr];
    for(int i=0;i<nl;i++)
        l[i]=data[s+i];
    for(int j=0;j<nr;j++)
        r[j]=data[m+1+j];
    int i=0,j=0,k=s;
    while(i<nl && j<nr)
    {
        if(l[i]<=r[j])
        {
            data[k]=l[i];
            i++;
            k++;
        }
        else
        {
            data[k]=r[j];
            j++;
            k++;
        }

    }
    while(i<nl)
    {
        data[k]=l[i];
        i++;
        k++;
    }
    while(j<nr)
    {
        data[k]=r[j];
        j++;
        k++;
    }
}
void MergeSort(int data[],int i,int n)
{
    if(n>i)
    {
        int m=i+(n-i)/2;
        MergeSort(data,i,m);
        MergeSort(data,m+1,n);

        Merge(data,i,m,n);
    }
}

/// Complete of Merge Sort function


/// Start main function now

int main()
{
    int len;
    while(cin>>len)
    {
        int data[len];
        for(int i=0;i<len;i++)
            cin>>data[i];
        MergeSort(data,0,len-1);
        for(int i=0;i<len;i++)
            cout<<data[i]<<endl;

    }
}

