#include <stdio.h>

int main()
{
    // Program to convert temperature between celsius and fahrenheit
    int scale;
    //int run;
    char cont;
    double temperature, celsius, fahrenheit;
    
    do
    {
        printf("\nChoose which scale to convert from: ");
        printf("\n1 - Celsius");
        printf("\n2 - Fahrenheit\n");
        scanf("%i", &scale);
        switch(scale)
        {
            case 1:
                printf("\nEnter the temperature in Celsius: ");
                scanf("%lf", &celsius);
                fahrenheit = 9.0 / 5.0 * celsius + 32.0;
                printf("\n%lf degrees celsius %lf degrees in fahrenheit", celsius, fahrenheit);
                break;
            case 2:
                printf("\nEnter the temperature in Fahrenheit: ");
                scanf("%lf", &fahrenheit);
                celsius = (fahrenheit - 32.0) / (9.0 / 5.0);
                printf("\n%lf degrees fahrenheit %lf degrees in celsius", fahrenheit, celsius);
                break;
            default:
                printf("\nNot a valid operation! Please try again.");
                //break;
        }

        do
        {
            printf("\nDo you want to convert another temperature? (y/n)");
            scanf(" %c", &cont);
            if(cont != 'y' && cont != 'n')
            {
                printf("Not a valid answer! Please try again.");
            }

        }
        while(cont != 'y' && cont != 'n');

/*      if(cont == 'y')
        {
            run = 1;
        }
        else
        {
            run = 0;
        }

    } while(run); */
    } while(cont == 'y');

    return 0;
}