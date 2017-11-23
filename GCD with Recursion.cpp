#include<bits/stdc++.h>
using namespace std;
int len;
int data[10000+5];
int GCD(int num1, int num2);
void Recursion(int pos1, int pos2);
int main()
{
    while(cin>>len)
    {
        for(int i=0;i<len;i++) cin>>data[i];
        Recursion(0,1);
    }
}
void Recursion(int pos1, int pos2)
{
    if(pos2==len-1) cout<<GCD(data[pos1],data[pos2])<<endl;
    else
    {
        data[pos2]=GCD(data[pos1],data[pos2]);
        Recursion(pos2,pos2+1);
    }
}
int GCD(int num1, int num2)
{
    if(num2>num1) swap(num1,num2);
    while(num1%num2!=0)
    {
        int temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    return num2;
}
