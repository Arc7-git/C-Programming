// compact sparse matrix representation & simple transpose
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
    printf("Sparse Matrix in Compact Form:\n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", spar[i][j]);
        }
        printf("\n ");
    }
    int t = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < k; j++)
        {
            if (spar[j][1] == i)
            {
                trans[t][0] = spar[j][1];
                trans[t][1] = spar[j][0];
                trans[t][2] = spar[j][2];
                t++;
            }
        }
    }
    printf("Transposed:\n");
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}