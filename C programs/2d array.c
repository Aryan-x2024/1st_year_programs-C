#include<stdio.h>
int main()
{
    int i,j;
    int r,c;
    printf("Enter the no of rows for matrix : ");
    scanf("%d",&r);
    printf("Enter no of colomns for matrix : ");
    scanf("%d",&c);
    int ar[r][c];
    printf("Enter Array elements : \n");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {   
            printf("Enter array[%d][%d] = ",i,j);
            scanf("%d",&ar[i][j]);     
        }
        
    }
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",ar[i][j]);
        }  
        printf("\n");    
    }

    return 0;
}
