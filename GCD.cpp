#include<bits/stdc++.h>
long con=0;
using namespace std;
void tg(long a,long b);
main()
{
    int len;
    cin>>len;
    long data[len];
    for(int i=0;i<len;i++)
        cin>>data[i];
    long a=data[0],b=data[1];
    tg(a,b);
    if(len>2)
    {
        for(int i=2;i<len;i++)
        {
            long x=data[i];
            long mn=min(x,con);
            for(;mn>=1;mn--)
            {
                if(x%mn==0 && con%mn==0)
                    break;
            }
            con=mn;
        }
    }
    cout<<con<<endl;
}

void tg(long a,long b)
    {
        int mn=min(a,b);
        int Count;
        for(;mn>=1;mn--)
        {
            if(a%mn==0 && b%mn==0)
                break;
        }
        con=mn;
    }
