#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; cin>>len;
    int data[len][len];
    int update[len][len]={0,0}; /// initial values

    /// input area
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
            cin>>data[i][j];
    }
    cout<<endl;
    /// :::::::::::::::::::::::::::::::::::::::::::::///
    /// ::::::::::::rotation precess area::::::::::::///
    /// :::::::::::::::::::::::::::::::::::::::::::::///

    /// 90 degree right
    /*
    for(int i=0; i<len; i++)
    {
        for(int j=0, newI=len-1; j<len; j++, newI--)
            update[i][j]=data[newI][i];
    }
    ///********inter-exchange of these two index can rotate the array to left******
    */

    /// 90 degree left
    /*
    for(int i=0,newJ=len-1; i<len; i++,newJ--)
    {
        for(int j=0;j<len;j++)
            update[i][j]=data[j][newJ];
    }
    ///********inter-exchange of these two index can rotate the array to right *****
    */

    /// 180 degree
    /*
    for(int i=0,newI=len-1; i<len; i++,newI--)
    {
        for(int j=0, newJ=len-1; j<len; j++, newJ--)
            update[i][j]=data[newI][newJ];
    }
    ///********180 degree rotation is same for right and left
    */

    /// vertical
    /*
    for(int i=0;i<len;i++)
    {
        for(int j=0, newJ=len-1;j<len;j++,newJ--)
            update[i][j]=data[i][newJ];
    }
    ///********** index inter-exchange has no difference
    */

    /// horizontal
    /*
    for(int i=0,newI=len-1;i<len;i++,newI--)
    {
        for(int j=0;j<len;j++)
            update[i][j]=data[newI][j];
    }
    ///********** index inter-exchange has no difference
    */



    ///:::::::::::::::::output of updated array::::::::::::::::///
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
            cout<<update[i][j]<<" ";
        cout<<endl;
    }

}
