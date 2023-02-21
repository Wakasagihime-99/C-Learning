/*
 * @Date: 2023-02-12
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-02-20
 * @FilePath: \c\Exercise\Easy.c
 * @Description: 简单题，不保留代码。
 */

#include <stdio.h>

long long fac(int num);

int main()
{
    int n;
    long long sum = 0;

    scanf("%d", &n);
    //    printf("%lld\n", fac(n));

    while (n--)
        sum += fac(n + 1);

    printf("%lld", sum);

    return 0;
}

long long fac(int num)
{
    if (num == 1)
        return 1;
    else
        return num * fac(num - 1);
}