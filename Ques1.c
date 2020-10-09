#include<stdio.h>
#include<conio.h>
main()
{
    printf("Please enter two no. :\n");
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Addition\t: %d",(a+b));
    printf("\nSubtraction\t: %d",(a-b));
    printf("\nMultiplication\t: %d",(a*b));
    printf("\nDivision\t: %d",(a/b));
    printf("\nRemainder\t: %d",(a%b));
    return 0;
}
