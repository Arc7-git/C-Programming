/*PROBLEM STATEMENT:
Write a program in C to perform basic matrix operations such as:
1. Addition of two matrices
2. Saddle point of a matrix
3. Inverse of a matrix
4. Magic square of a matrix*/
#include <stdio.h>
#define N 10

// ---------- Saddle Point ----------
void saddlePoint(int arr[N][N], int r, int c)
{
    int found = 0;

    for (int i = 0; i < r; i++)
    {
        int min = arr[i][0], col = 0;

        for (int j = 1; j < c; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                col = j;
            }
        }

        int flag = 1;
        for (int k = 0; k < r; k++)
        {
            if (arr[k][col] > min)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("Saddle Point = %d at (%d,%d)\n", min, i, col);
            found = 1;
        }
    }

    if (!found)
        printf("No Saddle Point\n");
}

// ---------- Magic Square ----------
void magicSquare(int arr[N][N], int n)
{
    int sum = 0;

    for (int j = 0; j < n; j++)
        sum += arr[0][j];

    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
            rowSum += arr[i][j];
        if (rowSum != sum)
        {
            printf("Not a Magic Square\n");
            return;
        }
    }

    for (int j = 0; j < n; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
            colSum += arr[i][j];
        if (colSum != sum)
        {
            printf("Not a Magic Square\n");
            return;
        }
    }

    printf("Magic Square\n");
}

// ---------- Inverse (n x n) ----------
void getCofactor(int A[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = A[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinant(int A[N][N], int n)
{
    if (n == 1)
        return A[0][0];

    int temp[N][N], D = 0, sign = 1;

    for (int f = 0; f < n; f++)
    {
        getCofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return D;
}

void adjoint(int A[N][N], int adj[N][N], int n)
{
    if (n == 1)
    {
        adj[0][0] = 1;
        return;
    }

    int temp[N][N], sign;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            getCofactor(A, temp, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, n - 1);
        }
    }
}

int inverse(int A[N][N], float inv[N][N], int n)
{
    int det = determinant(A, n);

    if (det == 0)
    {
        printf("Inverse does not exist\n");
        return 0;
    }

    int adj[N][N];
    adjoint(A, adj, n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] = adj[i][j] / (float)det;

    return 1;
}

// ---------- MAIN ----------
int main()
{
    int r, c;
    int arr1[N][N], arr2[N][N], sum[N][N];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter Matrix 1:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter Matrix 2:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr2[i][j]);

    // Addition
    printf("\nSum Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Saddle Point
    printf("\n--- Saddle Point ---\n");
    saddlePoint(arr1, r, c);

    // Magic Square
    printf("\n--- Magic Square ---\n");
    if (r == c)
        magicSquare(arr1, r);
    else
        printf("Not square matrix\n");

    // Inverse
    printf("\n--- Inverse ---\n");
    if (r == c)
    {
        float inv[N][N];
        if (inverse(arr1, inv, r))
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                    printf("%.2f ", inv[i][j]);
                printf("\n");
            }
        }
    }
    else
    {
        printf("Inverse not possible (not square)\n");
    }

    return 0;
}