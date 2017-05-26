#include<bits/stdc++.h>
using namespace std;
void fiv_gen(int n)
{
    int f1=1,f2=1;
    int s=f1+f2;
    cout<<f1<<" "<<f2;
    while(n>=s)
    {
        cout<<" "<<s;
        f1=f2;
        f2=s;
        s=f1+f2;
    }
}
void fiv(int n)
{
    int f1=1,f2=2;
    long c=f1+f2;
    long flag;
    for(int i=1;i<n;i++)
    {
        if(i==n-2)
            break;
        flag=c;
        f1=f2;
        f2=c;
        c=f1+f2;
    }
    cout<<endl<<endl<<flag<<"\t"<<f2<<endl<<endl;
}
int main()
{
    long num;
    while(cin>>num)
    {
        fiv_gen(num);
        fiv(num);
    }
}
