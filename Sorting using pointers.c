#include<stdio.h>
main()
{
    /// Define Pointer and data length
    int len;
    scanf("%d",&len);
    int *p;
    p=(int *)malloc(len*sizeof(int));
    int i;

    /// input Section

    for(i=0;i<len;i++)
        scanf("%d",p+i);

    /// Comparing and swapping area

    for(i=0;i<len;i++)
    {
        int j;
        for(j=i;j<len;j++)  /// for this condition , in pointer , it will descending flow if you give ascending condition. but using j=i you will get original way.
        {
            if(*(p+i)<*(p+j))
            {
                int temp;
                temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
            }
        }
    }

    ///output area

    for(i=0;i<len;i++)
        printf("%d ",*(p+i));
}
