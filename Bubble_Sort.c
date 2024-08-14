//
// Created by Administrator on 2024/8/13.
// 冒泡排序

#include <stdio.h>

#define MaxSize 10

int main() {
    int a[MaxSize];
    for (int i=0;i<MaxSize;i++) {
        scanf("%d", &a[i]);
    }

    for (int i=0;i<MaxSize;i++) {
        for (int j=0;j<MaxSize-i-1;j++) {
            int temp;
            if (a[j] > a[j+1]) {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i=0;i<MaxSize;i++)
        printf("%d ", a[i]);

    return 0;
}


/*
 *  冒泡排序:
 *      1.输入
 *      2.外层循环(0~MaxSize)控制趟数，
 *        内层循环(0~MaxSize-i-1)控制此趟的比较数
 *      3.比较若后者更大，则交换两数位置
 *      4.输出
 *
 *  时间复杂度：O(n^2)
 *  稳定性：稳定
 *
*/
