/*
 * @Date: 2023-02-07
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-03-06
 * @FilePath: \\pythond:\\code\\c\\Practice\\Practice.c
 * @Description: 学习时测试用代码
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    for (int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);

    return 0;
}
