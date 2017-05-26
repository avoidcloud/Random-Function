#include<bits/stdc++.h>
using namespace std;
int linear_search(int i,int n,int s,int *a)
{
    if(i==n)
        return -1;
    if(a[i]==s)
        return i;
    return linear_search(i+1,n,s,a);


}

int main()
{
    int len;
    cin>>len;
    int data[len];
    for(int i=0;i<len;i++)
        cin>>data[i];

    int snum;
    cin>>snum;
    int x;
    x=linear_search(0,len,snum,data);
    if(x==-1)
        puts("Nai");
    else
        cout<<"ase: "<<x+1<<" number e";
}
