#include<stdio.h>
int main()
{   
    int a,b,c;
    printf("Enter the marks obtained in 3 subjects : \n");
    scanf("%d %d %d",&a,&b,&c);
    float per = ((a+b+c) /300.0)*100;
    printf("percentage = %.2f \n",per);
    if (per>40){
        if (a>30 && b>30 && c>30)
        {
            printf("Passed\n");
        }
        else{
            printf("Failed\n");
        }
    }
    else
    {
        printf("Failed\n");
    }        
    return 0;        
}