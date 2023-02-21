/*
 * @Date: 2023-02-07
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-02-21
 * @FilePath: \c\Practice\Practice.c
 * @Description: 学习时测试用代码
 */
#include <stdio.h>

int main()
{
    int count = 2;
    char ch;
    char x = 'a';

    while(count--)
    {
        ch = getchar();
        switch (ch)
        {
        case 'a':
            printf("耶");
            continue;

        default:
            break;
        }
        printf("test");
    }
}
