#include<bits/stdc++.h>
using namespace std;
struct num
{
    float swe,eee,bng;
};
struct data
{
    char name[80];
    long roll;
    num sub;
    float cg;
}s[1000];
int main()
{
    int n;
    cout<<"How many Students: ";cin>>n;

    /// Input Area

    for(int i=1;i<=n;i++)
    {
        getchar();
        cout<<"Data "<<i<<endl;
        cout<<"Name : ";gets(s[i].name);
        cout<<"Roll : ";cin>>s[i].roll;
        cout<<"Numbers : SWE:EEE:BNG :";cin>>s[i].sub.swe>>s[i].sub.eee>>s[i].sub.bng;
        cout<<i<<"-th Complete!"<<endl<<endl;
    }

    /// CGPA Count Area

    for(int i=1;i<=n;i++)
    {
        int temp;
        temp=(s[i].sub.swe+s[i].sub.eee+s[i].sub.bng)/3;
        if(temp>80)
            s[i].cg=4;
        else if(temp<80 && temp>=70)
            s[i].cg=3.5;
        else if(temp<70 && temp>=60)
            s[i].cg=3;
        else if(temp<60 && temp>=50)
            s[i].cg=2.5;
        else if(temp<50 && temp>=40)
            s[i].cg=2;
        else
            s[i].cg=0;
    }

    /// CGPA analysis and swapping for Ranking Area


    for(int i=1;i<=n-1;i++)
    {
        if(s[i].cg<s[i+1].cg)
            swap(s[i],s[i+1]);
    }

    cout<<endl;

    /// Output Area
    puts("Result is out!");
    for(int i=1;i<=n;i++)
    {
        cout<<"Rank: "<<i<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll: "<<s[i].roll<<endl;
        cout<<"CGPA: "<<s[i].cg<<endl<<endl;
    }
}

