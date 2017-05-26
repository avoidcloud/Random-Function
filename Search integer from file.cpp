#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *f;
    f=fopen("Roll.txt","r");
    int s,d,i=0;
    cin>>s;
    while(!feof(f))
    {
        fscanf(f,"%d",&d);
        if(s==d)
           {
              puts("YES");
              i=1;
              break;
           }
    }
    if(i!=1)
        puts("NO");
    fclose(f);
}
