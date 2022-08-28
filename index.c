/*
 * @Date: 2022-07-02 13:51:27
 * @LastEditors: jimouspeng
 * @Description: 描述文件内容
 * @LastEditTime: 2022-08-26 21:21:53
 * @FilePath: \c_program\index.c
 */
#include <stdio.h>
void butler(void);
// void是main函数的参数，int是main函数的返回值类型
int main(void)
{
    char *hisName;
    int age = 2;
    hisName = "jimous";
    age = 0;
    printf("Gustav Mahler \n");
    butler();
    // scanf: 读取键盘的输入，返回成功读取的项数，如果没有读取任何项，且需要读取一个数组而用户却输入一个非数值字符串，那么返回0
    // 如果需要读取基本变量类型的值，在变量名前加一个&；
    // 如果把字符串读入字符串数组中，那么不要使用&
    scanf("%d", &age);
    printf("hahahah%d", age); // %提醒程序，在此处打印一个变量，d表明把变量作为十进制整数打印
    // printf("天数 %d； \n年龄： %d; \n名字：%c", age * 365, age, hisName);
    /** printf()函数打印数据的指令要与待打印数据的类型相匹配
     * eg:
     * 打印整数时使用%d
     * 打印字符时使用%c
     * %f: 浮点数
     * %s: 字符串
     * %p: 指针
     * %%： 打印百分号
     * 这些符号被称为转换说明，它们指定了如何把数据转换成可显示的形式。
     */
    return 0; // 缺少return，会默认返回0
}

void butler(void)
{
    printf("hahahah \n");
}
