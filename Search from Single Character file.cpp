#include<stdio.h>
main()
{
    char k;
    FILE *Ch;
    Ch=fopen("L.txt","r");
    char s;
    scanf("%c",&s);
    int i=0;
    while(!feof(Ch))
    {
        fscanf(Ch,"%c",&k);
        if(s==k)
        {
            puts("YES");
            i=1;
            break;
        }

    }
    if(i!=1)
        puts("NO");
    fclose(Ch);
}
