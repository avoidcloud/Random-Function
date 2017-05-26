#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    int data[len];
    for(int i=0;i<len;i++)
        cin>>data[i];
    for(int i=1;i<len;i++)
    {
        int pos = i;
        int j=i-1;
        while(j>=0 && data[pos]<data[j])
        {
            swap(data[pos], data[j]); /// here we use swap  and for this no need to use flag. but on other program i use flag, because there the value of data[i] will vanish when find out first bigger element.
            pos = j;
            j--;
        }
    }
    puts("Sorting complete");
    for(int i=0;i<len;i++)
        cout<<data[i]<<" ";
}
