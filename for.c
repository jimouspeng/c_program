/*
 * @Date: 2022-08-28 22:09:01
 * @LastEditors: jimouspeng
 * @Description: for循环
 * @LastEditTime: 2022-09-10 19:30:00
 * @FilePath: \c_program\for.c
 */

#include <stdio.h>
int main(void)
{
    const int Number = 22;
    int count;
    int countTwo;
    for (count = 1; count <= Number; count += 5)
    {
        for (countTwo = 2; countTwo <= Number; countTwo = countTwo * 2)
            printf("��һ��count %d \n", countTwo);
        printf("count�ⲿ %d \n", count);
    }

    return 0;
}
