/*
 * @Date: 2023-03-13
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-03-17
 * @FilePath: \\C_Project\\var.c
 * @Description:
 */

// reducto.c - 将原来文件压缩为1/3，每三个字符删掉两个

#include <stdio.h>
#include <stdlib.h> // 提供exit()原型
#include <string.h> // 提供字符串函数原型
#define LEN 40

int main(int argc, char *argv[])
{
    FILE *in, *out; // 声明两个指向FILE的指针
    int ch;
    char name[LEN]; // 存储输出的文件名
    int count = 0;

    // 检查命令行参数
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        // 这句话的意思是：“使用帮助：程序名后增加你要压缩的文件名”
        exit(EXIT_FAILURE);
    }

    // 设置输入
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    // 设置输出
    strncpy(name, argv[1], LEN - 5); // 拷贝文件名
    name[LEN - 5] = '\0';
    strcat(name, ".red"); // 在文件名后添加.reduce
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(EXIT_FAILURE);
    }

    // 拷贝数据
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out); // 打印每3个字符中的第1个

    // 收尾工作
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "ERROR in closing files\n");

    return 0;
}
