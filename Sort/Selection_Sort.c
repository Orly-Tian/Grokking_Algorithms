//
// Created by Administrator on 2024/8/13.
// 选择排序

#include <stdio.h>

#define Maxsize 10

int main() {
    int a[Maxsize];
    for (int i=0;i<Maxsize;i++)
        scanf("%d", &a[i]);

    for (int i=0;i<Maxsize-1;i++) {
        int min = i;
        for (int j=i+1;j<Maxsize;j++) {
            if (a[min] > a[j])
                min = j;
        }

        if (i != min) {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }

    for (int i=0;i<Maxsize;i++)
        printf("%d ", a[i]);

    return 0;

}



/*
 *  选择排序：
 *      1.输入
 *      2.外层循环(0~MaxSize-1)控制需要比较的第一个元素，
 *        内层循环(i+1~MaxSize)控制需要比较的第二个元素
 *      3.定义变量min=i，将min处的值与j比较，若j更小，则将min=j
 *        内层循环结束，则min中存储此次内循环的最小值
 *      4.若i处的值与min处的值不相同，则交换两数位置
 *      5.输出
 *
 *  时间复杂度：O(n^2)
 *  稳定性：不稳定
 *
 */
