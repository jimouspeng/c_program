/*
 * @Date: 2022-07-02 13:51:27
 * @LastEditors: jimouspeng
 * @Description: 描述文件内容
 * @LastEditTime: 2022-08-18 22:00:39
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
    // scanf: 读取键盘的输入
    scanf("%d", &age);
    printf("hahahah%d", age); // %提醒程序，在此处打印一个变量，d表明把变量作为十进制整数打印
    // printf("天数 %d； \n年龄： %d; \n名字：%c", age * 365, age, hisName);
    return 0; // 缺少return，会默认返回0
}

void butler(void)
{
    printf("hahahah \n");
}
