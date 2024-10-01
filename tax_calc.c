#include<stdio.h>
// tax payed to govt.
int main()
{   
    float a,tax;
    printf("Enter your salary : ");
    scanf("%f",&a);
    if (a>=200000 && a<500000)
    {
        tax=(a*5.0)/100;
        printf("Tax payed by an employee = %.2f \n",tax);
        printf("Total salary in hand = %.2f \n",a-tax);
    }
    else if (a>=500000 && a<1000000)
    {
        tax=(a*20.0)/100;
        printf("Tax payed by an employee = %.2f \n",tax);
        printf("Total salary in hand = %.2f \n",a-tax);
    }
    else if (a>=1000000)
    {
        tax=(a*30.0)/100;
        printf("Tax payed by an employee = %.2f \n",tax);
        printf("Total salary in hand = %.2f \n",a-tax);
        
    }
    else if (a<=100000)
    {
        printf("No taxes :)");
    }
    return 0;
}
