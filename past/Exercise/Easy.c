/*
 * @Date: 2023-02-12
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-03-03
 * @FilePath: \\pythond:\\code\\c\\Exercise\\Easy.c
 * @Description: 简单题，不保留代码。
 */

#include <stdio.h>

void arr_mul(int n, int m, int k, const int A[][m], const int B[][k], int mul[][k]);

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int i, j;
    const int A[n][m], B[m][k];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < k; j++)
            scanf("%d", &B[i][j]);

    int mul[n][k];
    arr_mul(n, m, k, A, B, mul);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k - 1; j++)
            printf("%d ", mul[i][j]);
        printf("%d\n", mul[i][k - 1]);
    }

    return 0;
}

void arr_mul(int n, int m, int k, const int A[][m], const int B[][k], int mul[][k])
{
    int i, j, l;
    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
        {
            mul[i][j] = 0;
            for (l = 0; l < m; l++)
                mul[i][j] += A[i][l] * B[l][j];
        }
            
}