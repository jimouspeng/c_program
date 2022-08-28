/*
 * @Date: 2022-08-28 22:09:01
 * @LastEditors: jimouspeng
 * @Description: for循环
 * @LastEditTime: 2022-08-28 22:14:25
 * @FilePath: \c_program\for.c
 */

#include <stdio.h>
int main(void)
{
    const int Number = 22;
    int count;
    for (count = 1; count <= Number; count += 5)
    {
        printf("%d \n", count);
    }

    return 0;
}
