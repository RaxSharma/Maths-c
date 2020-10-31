/* calculate mean, variance, std deviation

#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
     
void main()
{
        float x[MAXSIZE];
        int  j, n;
        float average, variance, std_deviation, sum = 0, sum1 = 0;

        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter %d real numbers \n", n);
        for (j = 0; j < n; j++)
        {
            scanf("%f", &x[j]);
        }

        /*  Compute the sum of all elements */
        for (j = 0; j < n; j++)
        {
            sum = sum + x[j];
        }
        average = sum / (float)n;

        /*  Compute  variance  and standard deviation  */
        for (j = 0; j < n; j++)
        {
            sum1 = sum1 + pow((x[j] - average), 2);
        }
        variance = sum1 / (float)n;

        std_deviation = sqrt(variance);
        printf("Average of all elements = %.2f\n", average);
        printf("variance of all elements = %.2f\n", variance);
        printf("Standard deviation = %.2f\n", std_deviation);
}
