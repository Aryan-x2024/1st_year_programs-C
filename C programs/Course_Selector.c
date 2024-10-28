#include<stdio.h>
int main()
{
    char D;
    int Y,O;
    printf("Enter Year of Study (1/2/3) : ");
    scanf("%d",&Y);
    printf("Enter Department ---> \n C - CSE \n E - Electronics and Telecommunication \n M - Mechanical Engineering \n ");
    scanf(" %c",&D);

    switch(Y)
    {
        case 1 :
            printf("For 1st year ---->  ");
            switch(D)
            {
                case 'C' :
                    printf("Available courses ----> \n 1.Programming Fundamentals \n 2.Discrete Mathematics \n 3.Digital Logic Design \n");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Programming Fundamentals ");
                        break;
                    case 2:
                        printf("The selected coarse is Discrete Mathematics ");
                        break;
                    case 3:
                        printf("The selected coarse is Digital Logic Design ");
                        break;
                    }
                    break;
                case 'E':
                    printf("Available courses ----> \n 1.Engineering Physics \n 2.Circuit Theory \n 3.Signals and Systems \n");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Engineering Physics ");
                        break;
                    case 2:
                        printf("The selected coarse is Circuit Theory ");
                        break;
                    case 3:
                        printf("The selected coarse is Signals and Systems ");
                        break;
                    }
                    break;
                case 'M':
                    printf("Available Courses ----> \n 1.Engineering Chemistry \n 2.Basic Electrical Engineering \n 3.Engineering Mechanics ");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Engineering Chemistry ");
                        break;
                    case 2:
                        printf("The selected coarse is Basic Electrical Engineering ");
                        break;
                    case 3:
                        printf("The selected coarse is Engineering Mechanics ");
                        break;

                    }
                    break;
            }
            break;
            
        case 2 :
            printf("For 2nd year ----> ");
            switch(D)
            {
                case 'C' :
                    printf("Available courses ----> \n 1.Data Structures and Algorithms \n 2.Database Management Systems \n 3.Computer Organization and Architecture \n");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Data Structures and Algorithms ");
                        break;
                    case 2:
                        printf("The selected coarse is Database Management Systems ");
                        break;
                    case 3:
                        printf("The selected coarse is Computer Organization and Architecture ");
                        break;
                    }
                    break;
                case 'E':
                    printf("Available courses ----> \n 1.Analog Electronics \n 2.Digital Signal Processing \n 3.Electromagnetic Field Theory \n");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Analog Electronics ");
                        break;
                    case 2:
                        printf("The selected coarse is Digital Signal Processing ");
                        break;
                    case 3:
                        printf("The selected coarse is Electromagnetic Field Theory ");
                        break;
                    }
                    break;
                    
                case 'M':
                    printf("Available Courses ----> \n 1.Electrical Machines \n 2.Power Systems \n 3.Control Systems");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Electrical Machines ");
                        break;
                    case 2:
                        printf("The selected coarse is Power Systems ");
                        break;
                    case 3:
                        printf("The selected coarse is Control Systems ");
                        break;
                    }
                    break;
            }
            break;
            
        case 3 :
            printf("For 3rd year ----> ");
            switch(D)
            {
                case 'C' :
                    printf("Available courses ----> \n 1.Operating Systems \n 2.Theory of Computation \n 3.Software Engineering \n");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Operating Systems ");
                        break;
                    case 2:
                        printf("The selected coarse is Theory of Computation ");
                        break;
                    case 3:
                        printf("The selected coarse is Software Engineering ");
                        break;
                    }
                    break;    
                case 'E':
                    printf("Available courses ----> \n 1.Microcontrollers and Embedded Systems \n 2.Communication Systems \n 3.Antenna and Wave Propagation \n");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Microcontrollers and Embedded Systems ");
                        break;
                    case 2:
                        printf("The selected coarse is Communication Systems ");
                        break;
                    case 3:
                        printf("The selected coarse is Antenna and Wave Propagation ");
                        break;
                    }
                    break;
                case 'M':
                    printf("Available Courses ----> \n 1.Power Electronics \n 2.Electrical Measurements and Instrumentation \n 3.Renewable Energy Systems");
                    printf("Enter Course :  ");
                    scanf("%d",&O);
                    switch(O)
                    {
                    case 1:
                        printf("The selected coarse is Power Electronics ");
                        break;
                    case 2:
                        printf("The selected coarse is Electrical Measurements and Instrumentation");
                        break;
                    case 3:
                        printf("The selected coarse is Renewable Energy Systems ");
                        break;
                    }
                    break;
            }
            break;
    }
    
    return 0;
}