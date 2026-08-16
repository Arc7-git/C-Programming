#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the total numbers of rows and columns\n");
    scanf("%d %d", &m, &n);
    int Arr[m][n];
    int spar[10][3];
    int trans[10][3];
    spar[0][0] = m;
    spar[0][1] = n;
    trans[0][0] = n;
    trans[0][1] = m;

    int k = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Arr[i][j] != 0)
            {
                spar[k][0] = i;
                spar[k][1] = j;
                spar[k][2] = Arr[i][j];
                k++;
            }
        }
    }

    spar[0][2] = k - 1;
    trans[0][2] = k - 1;
    int t = k - 1;
    int S[n], T[n];
    for (int i = 0; i <= n; i++)
    {
        S[i] = 0;
    }
    for (int i = 1; i <= t; i++)
    {
        S[spar[i][1]] = S[spar[i][1]] + 1;
    }
    T[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        T[i] = T[i - 1] + S[i - 1];
    }
    for (int i = 1; i <= t; i++)
    {
        int j = spar[i][1];
        trans[T[j]][0] = spar[i][1];
        trans[T[j]][1] = spar[i][0];
        trans[T[j]][2] = spar[i][2];
        T[j]++;
    }
    printf("\nFast Transposed matrix:\n");
    for (int i = 0; i <= t; i++)
    {
        printf("%d %d %d\n", trans[i][0], trans[i][1], trans[i][2]);
    }
}
