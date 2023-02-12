/*
 * @Date: 2023-02-12
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-02-12
 * @FilePath: \c\Exercise\Easy.c
 * @Description: 简单题，不保留代码。
 */

#include <stdio.h>
#include <ctype.h>
#define SPACE ' '

int main()
{
    char c;
    int alpha = 0, number = 0, space = 0, other = 0;
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            alpha++;
        else if (isdigit(c))
        {
            number++;
        }
        else if (c == SPACE)
        {
            space++;
        }
        else if (ispunct(c))
        {
            other++;
        }
    }
    printf("%d %d %d %d", alpha, number, space, other);
    return 0;
}