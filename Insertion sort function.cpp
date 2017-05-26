#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int k,int len,int *data)///here k is initial point from where (element index) sorting will start
{
    for(int i=k+1;i<len;i++) ///here i use pointer for access the array's position and then apply insertion sort.
    {
        int flag=data[i];
        int j=i-1;
        while(j>=0 && flag<data[j])
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=flag;
    }
}
int main()
{
    ///input area of array

    insertion_sort(0,len,data); ///let it process for insertion sort

    ///output area of sorting array

}
