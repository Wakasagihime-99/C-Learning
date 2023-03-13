/*
 * @Date: 2023-03-13
 * @LastEditors: error: git config user.name & please set dead value or install git
 * @LastEditTime: 2023-03-13
 * @FilePath: \\C_Projectd:\\code\\c\\C_Project\\hello.c
 * @Description:
 */
#include <stdio.h>

int main()
{
    extern int die;

    printf("hello\n");
    printf("%d", die);
}