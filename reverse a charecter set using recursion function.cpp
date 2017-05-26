#include<bits/stdc++.h>
using namespace std;
void reline(void); /// into the function i use void , cause i read data in function so i do't need to collect data from main function.
main()
{
    reline(); /// after execute main function i call the reline function and i will do my all work there.
}
void  reline(void)
{
    char c;  ///ever time i read a character until break the below's condition.
    if((c=getchar())!='\n') /// condition is read and call the function again and again until get the next line command (Until press the enter key)
        reline(); ///calling the function till the condition satisfied.
    cout<<c;  /// print after break the condition as usual of recursion way. I mean from the last element to first element.
}
