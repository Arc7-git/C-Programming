// write a code to accept 2 matrices and find their , sum , difference, product, transpose and saddle point
#include <stdio.h>
void accept(int a[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int a[10][10], int r, int c)
{
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void add(int a[10][10], int b[10][10], int dim[])
{
    if (dim[0] != dim[2] || dim[1] != dim[3])
    {
        printf("wrong matrix dimensions\n");
        return;
    }
    int c[10][10];
    for (int i = 0; i < dim[0]; i++)
    {
        for (int j = 0; j < dim[1]; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrices:\n");
    display(c, dim[0], dim[1]);
}
void subtract(int a[10][10], int b[10][10], int dim[])
{
    if (dim[0] != dim[2] || dim[1] != dim[3])
    {
        printf("wrong matrix dimensions\n");
        return;
    }
    int c[10][10];
    for (int i = 0; i < dim[0]; i++)
    {
        for (int j = 0; j < dim[1]; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("difference of matrices:\n");
    display(c, dim[0], dim[1]);
}
void multiply(int a[10][10], int b[10][10], int dim[])
{
    if (dim[1] != dim[2])
    {
        printf("wrong matrix dimensions\n");
        return;
    }
    int c[10][10];
    for (int i = 0; i < dim[0]; i++)
    {
        for (int j = 0; j < dim[3]; j++)
        {
            int sum = 0;
            for (int k = 0; k < dim[1]; k++)
                sum = a[i][k] * b[k][j] + sum;
            c[i][j] = sum;
        }
    }
    display(c, dim[0], dim[3]);
}
void transpose(int a[10][10], int dim[])
{
    int c[10][10];
    for (int i = 0; i < dim[0]; i++)
    {
        for (int j = 0; j < dim[1]; j++)
        {
            c[j][i] = a[i][j];
        }
    }
    display(c, dim[1], dim[0]);
}
void saddle_point(int a[10][10], int dim[])
{
    int max = -100, min = 10000;
    for (int i = 0; i < dim[0]; i++)
    {
        max = -100;
        for (int j = 0; j < dim[1]; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
        a[i][dim[1]] = max;
    }

    for (int j = 0; j < dim[1]; j++)
    {
        min = 10000;
        for (int i = 0; i < dim[0]; i++)
        {
            if (a[i][j] < min)
                min = a[i][j];
        }
        a[dim[0]][j] = min;
    }

    int m1 = 10000;
    for (int i = 0; i < dim[0]; i++)
    {
        if (a[i][dim[1]] < m1)
            m1 = a[i][dim[1]];
    }

    int m2 = -100;
    for (int j = 0; j < dim[1]; j++)
    {
        if (a[dim[0]][j] > m2)
            m2 = a[dim[0]][j];
    }

    if (m1 == m2)
    {
        a[dim[0]][dim[1]] = m1;
        printf("Saddle point = %d\n", m1);
    }
    else
    {
        a[dim[0]][dim[1]] = -1;
        printf("No saddle point\n");
    }

    for (int i = 0; i <= dim[0]; i++)
    {
        for (int j = 0; j <= dim[1]; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int a[10][10], b[10][10];
    int dim[4];
    printf("Enter rows and columns for 1st matrix: ");
    scanf("%d %d", &dim[0], &dim[1]);
    printf("Enter elements for first matrix:\n");
    accept(a, dim[0], dim[1]);
    printf("Enter rows and columns for 2nd matrix: ");
    scanf("%d %d", &dim[2], &dim[3]);
    printf("Enter elements for second matrix:\n");
    printf("\n");
    accept(b, dim[2], dim[3]);
    printf("\n");

    printf("Enter your choice \n1: Add\n2: Subtract\n3: Multiply\n4: Transpose\n5: Saddle Point ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add(a, b, dim);
        break;
    case 2:
        subtract(a, b, dim);
        break;
    case 3:
        multiply(a, b, dim);
        break;
    case 4:
        transpose(a, dim);
        break;
    case 5:
        saddle_point(a, dim);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
