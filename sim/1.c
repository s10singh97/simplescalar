#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], result[3][3], r1, c1, r2, c2, i, j, k;

    // printf("Enter rows and column for first matrix: ");
    // scanf("%d %d", &r1, &c1);

    // printf("Enter rows and column for second matrix: ");
    // scanf("%d %d",&r2, &c2);

    // // Column of first matrix should be equal to column of second matrix and
    // while (c1 != r2)
    // {
    //     printf("Error! column of first matrix not equal to row of second.\n\n");
    //     printf("Enter rows and column for first matrix: ");
    //     scanf("%d %d", &r1, &c1);
    //     printf("Enter rows and column for second matrix: ");
    //     scanf("%d %d",&r2, &c2);
    // }

    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            a[i][j] = 2;
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            b[i][j] = 3;
        }

    // Initializing all elements of result matrix to 0
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
            for(k=0; k<3; ++k)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }

    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == 3-1)
                printf("\n\n");
        }
    return 0;
}