/*
 * @Date: 2023-02-09
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-02-09
 * @FilePath: \c\Exercise\number.c
 * @Description:
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int num, bit = 0, i, temp;
    scanf("%d", &num);

    if (!(num / 10) && num != 0)
        bit = 1;
    if (!(num / 100) && (num / 10))
        bit = 2;
    if (!(num / 1000) && (num / 100))
        bit = 3;
    if (!(num / 10000) && (num / 1000))
        bit = 4;
    if (num / 10000)
        bit = 5;
    printf("%d\n", bit);

    for (i = bit; i > 1; i--)
    {
        temp = (num - num / (int)pow(10, i) * (int)pow(10, i)) / (int)pow(10, i - 1);
        printf("%d ", temp);
    }

    temp = (num - num / 10 * 10);
    printf("%d\n", temp);

    for (i = 1; i <= bit; i++)
    {
        temp = (num - num / (int)pow(10, i) * (int)pow(10, i)) / (int)pow(10, i - 1);
        printf("%d", temp);
    }
}