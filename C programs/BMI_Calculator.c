#include<stdio.h>
int main()
{
    float h,w,bmi; // h = Height and w = Weight
    printf("Enter Height (m): ");
    scanf("%f",&h);
    printf("Enter Weight (Kg): ");
    scanf("%f",&w);
    bmi = w/(h*h);
    printf("BMI = %0.2f\n",bmi);
    if (bmi<18.5)
    {
        printf("Underweight");
    }
    else if((bmi>=18.5) && (bmi<=24.9))
    {
        printf("Normal Weight");

    }
    else if ((bmi>=25) && (bmi<=29.9))
    {
        printf("Overweight");
    }
    else if (bmi>=30)
    {
        printf("Obese");
    }

    
    return 0;
}
