#include<bits/stdc++.h>
using namespace std;
long lcm=1;
int main()
{
    long len;
    cin>>len;
    long data[len];
    for(int i=0;i<len;i++)
        cin>>data[i];
    for(int i=0;i<len;i++)
    {
        long num=data[i];
        long mx=max(lcm,num);
        for(int i=mx;;)
        {
            if(mx%num==0 && mx%lcm==0)
            {
                lcm=mx;
                break;
            }
            else
                mx++;
        }
    }
    cout<<lcm<<endl;
}
