/*
 * @Date: 2023-02-09
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-02-09
 * @FilePath: \c\Exercise\cow.c
 * @Description: 小牛迭代
 */

// #include <stdio.h>

// int main()
// {
//     int cow_able, cow_disable3, cow_disable2, cow_disable1, cow_all, n, i;

//     while (scanf("%d", &n) != EOF)
//     {
//         cow_able = 1; // 初始化
//         cow_disable1 = cow_disable2 = cow_disable3 = 0;

//         for (i = 2; i <= n && n > 0 && n < 55; i++)
//         {
//             cow_able += cow_disable3; // 长成熟的

//             cow_disable3 = cow_disable2; // 上年的移位
//             cow_disable2 = cow_disable1;

//             cow_disable1 = cow_able; // 今年新生的牛

//             cow_all = cow_able + cow_disable1 + cow_disable2 + cow_disable3;
//         }

//         if (n > 0 && n < 55)
//             printf("%d\n", cow_all);
//     }

//     return 0;
// }

//递归题解！

#include <stdio.h>

int fun(int n)
{
    if (n <= 3)
        return n;
    else
        return fun(n - 1) + fun(n - 3);
}
int main()
{
    int n;
    while (scanf("%d", &n) && n)
        printf("%d\n", fun(n));

    return 0;
} 