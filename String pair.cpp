#include<stdio.h>

int LENGTH(char data[]);
void myFunction(char source[],char pattern[]);
void PairFunction(char source[], char leftPattern[], char rightPattern[]);

int main()
{
    char source[1000]; char leftPattern[1000]; char rightPattern[1000];
    printf("Enter source string : "); gets(source);
    printf("Enter Left pattern string : "); gets(leftPattern);
    printf("Enter right pattern string : "); gets(rightPattern);
    puts("\nPairs:");  PairFunction(source,leftPattern,rightPattern);

}
int LENGTH(char data[])
{
    for(int i=0;;i++)
    {
        if(*(data+i)=='\0')
            return i;
    }
}
void PairFunction(char source[], char leftPattern[], char rightPattern[])
{
    bool notFound=true;
    int source_length=LENGTH(source);
    int leftPattern_length=LENGTH(leftPattern);
    int rightPattern_length=LENGTH(rightPattern);

    for(int sourceIndex=0; sourceIndex<source_length; sourceIndex++)
    {
        for(int leftIndex=0; leftIndex<leftPattern_length; leftIndex++)
        {
            if(source[sourceIndex+leftIndex]!=leftPattern[leftIndex])
                break;
            if(leftIndex==leftPattern_length-1)
            {
                int temp1=sourceIndex;
                for(int index=0; index<source_length; index++)
                {
                    for(int rightIndex=0; rightIndex<rightPattern_length; rightIndex++)
                    {
                        if(source[index+rightIndex]!=rightPattern[rightIndex])
                            break;
                        if(rightIndex==rightPattern_length-1)
                        {
                            int temp2=index;
                            if(temp1<temp2)
                                printf("Find a pair (%d , %d) \n",temp1,temp2),
                                notFound=false;
                        }
                    }
                }

            }
        }
    }
    if(notFound)
        puts("No pair found !");
}


