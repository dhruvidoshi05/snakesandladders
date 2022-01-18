//#include <stdio.h>
//main()
//{
//    int i, j, n;
//    printf("Enter the number:");
//    scanf("%d", &n);
//    // upper half of the pattern
//    for(i = 0; i < n; i++) 
//    {
//        for(j = 0; j < (2 * n); j++)
//        { 
//            if(i + j <= n - 1)  // upper left triangle
//                printf("*");
//            else
//                printf(" ");
//            if((i + n) <= j)  // upper right triangle
//                printf("*");
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    // bottom half of the pattern
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < (2 * n); j++)
//        {
//            if(i >= j)  //bottom left triangle
//                printf("*");
//            else
//                printf(" ");
//            if(i >= (2 * n - 1) - j)  // bottom right triangle
//                printf("*");
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//  C program to print pascal’s triangle

#include
int main()
{
int rows, coef = 1, space, i, j;
printf("\nEnter the number of rows : ");
scanf("%d",&rows);
printf("\n");

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf(" ");

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
coef = 1;
else
coef = coef*(i-j+1)/j;

printf("%4d", coef);
}
printf("\n\n");
}

return 0;
}

