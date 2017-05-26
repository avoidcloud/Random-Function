#include<stdio.h>
main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int *x[row];
    for(i=0;i<row;i++)
        x[i]=(int *)malloc(col*sizeof(int));
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",(*(x+i)+j));
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d\t",*(*(x+i)+j));
        printf("\n");
    }
}
