/*
 * @Date: 2023-02-12
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-02-12
 * @FilePath: \c\Exercise\divisor_multiple.c
 * @Description: 最大公因数与最小公倍数
 */
// #include <stdio.h>

// int main()
// {
//     int a, b, min, max, i, divisor, multiple;
//     scanf("%d %d", &a, &b);
//     min = a <= b ? a : b;
//     max = a <= b ? b : a;

//     for (i = min; i >= 1; i--)
//         if (a % i == 0 && b % i == 0)
//         {
//             divisor = i;
//             break;
//         }

//     for (i = max; i <= a * b; i++)
//         if (i % a == 0 && i % b == 0)
//         {
//             multiple = i;
//             break;
//         }

//     printf("%d %d", divisor, multiple);
// }

// 题解：辗转相除法
int GCD(int x, int y) // 循环实现
{
    int z;
    while (y)
    {
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int GCD(int x, int y) // 递归实现
{
    if (y == 0)
        return x;
    else
        return GCD(y, x % y);
}

int LCM(int x, int y) // 最小公倍数
{
    return x * y / GCD(x, y);
}