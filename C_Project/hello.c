/*
 * @Date: 2023-03-13
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-04-02
 * @FilePath: \\C_Project\\hello.c
 * @Description:
 */
#include <stdio.h>
#include <string.h>
#define EIGHT 4 * 2
int main()
{

    struct
    {
        unsigned int field1 : 31;
        unsigned int field2 : 3;
    } stuff;

    stuff.field1 = 15;
    stuff.field2 = 7;

    printf("%d\n", EIGHT);
    printf("%d\n", __LINE__);
#line 10
    printf("%d\n", __LINE__);
    printf("%d\n", __LINE__);

    return 0;
}