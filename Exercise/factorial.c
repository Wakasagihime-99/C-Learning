/*
 * @Date: 2023-02-20
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-02-20
 * @FilePath: \c\Exercise\factorial.c
 * @Description: 阶乘计算
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

// 没初始化sum造成的一系列错误……