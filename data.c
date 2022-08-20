/*
 * @Date: 2022-08-18 21:57:09
 * @LastEditors: jimouspeng
 * @Description: 描述文件内容
 * @LastEditTime: 2022-08-19 21:56:08
 * @FilePath: \c_program\data.c
 */
#include <stdio.h>

// char类型：用于存储字符，但从技术层面看，char是整数类型。
// 因为char类型实际上储存的是整数而不是字符(计算机使用数字编码来处理字符，例如ASCII码中，整数65代表大写字符A)
int studyChar(void)
{
    char firstStr;
    // firstStr = "A";
    scanf("%c", &firstStr);
    printf("look, wooh %c \n", firstStr);
    return 0;
}

int main(void)
{
    int ten = 13;
    int one = 10;
    float weight;
    /** float浮点数：7是整数，7.00是浮点数, 通过%f打印
     * %d:十进制
     * %o:八进制， %lo: 以八进制打印long类型整数
     * %x:十六进制，%lx: 以十六进制格式打印long类型整数
     * 打印short类型，可以用%u; 打印long类型，可以用%ld，如果int和long的大小相同，那么使用%d就行
     */
    float value;
    studyChar();
    printf("Are you worth your weight in platinum? \n");
    // %f: 表明scanf()要读取用户从键盘输入的浮点数；&weight告诉scanf()把输入的值赋值给weight
    scanf("%f", &weight);
    value = 1700 * weight * 15.9255;
    // %.nf: 保留小数点后n位精度
    printf("your wieght in platinum is worth $%.2f \n %d \n %d", value, ten);
    printf("eight---: %o", ten);
    return 0;
}
