#include<bits/stdc++.h>
using namespace std;
void ren(int i,int n,int *a);
int main()
{
    int i,n,a[1000];  ///i define i will read only less then 1000 element. Its everyone choice.
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]; ///input all my element into an array;
    ren(0,n,a); /// send array initial and end position using 0 and n. and send array's name;
    cout<<endl;
}
void ren(int i,int n,int *a) /// get array's initial and end point. Using pointer to access array's position.
{
    if(i<n)  ///condition for initial to end point.
    {
        ren(i+1,n,a);  /// every time send all data to the function and for this function continue until break the condition and don't pass this statement.
        cout<<a[i]<<" "; /// after break the condition function start to print it's accesses data. For recursion logic function start to print from the last access's data to the first.
    }
}

///ultimately we get the reverse of the array.
