/*
 * @Date: 2022-08-26 21:24:10
 * @LastEditors: jimouspeng
 * @Description: 运算符、表达式和语句
 * @LastEditTime: 2022-08-26 21:41:06
 * @FilePath: \c_program\culclate.c
 */
#include <stdio.h>
#define NAME 'jimous'
#define DEFAULTNUM 10

int main()
{
    const double SCALE = 1.3333; // double: 表示带小数点的数
    double shoe, foot;
    shoe = 3.0;
    printf("shoe size");
    // %10.1f-> 句点(.)之前的数字是指定的字段宽度
    while (shoe < 12)
    {
        foot = shoe * SCALE + DEFAULTNUM;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe += 1.0;
    }
    return 0;
}