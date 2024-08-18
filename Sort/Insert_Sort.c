//
// Created by Administrator on 2024/8/18.
// 插入排序

#include <stdio.h>

#define MaxSize 5


int main() {
    int a[MaxSize];
    for (int i=0;i<MaxSize;i++)
        scanf("%d", &a[i]);

    int i,j;
    for (i=1;i<MaxSize;i++) {
        if (a[i-1] > a[i]) {
            int temp = a[i];
            for (j=i-1;j>=0 && a[j]>temp;j--)
                a[j+1] = a[j];
            a[j+1] = temp;
        }
    }

    for (int i=0;i<MaxSize;i++)
        printf("%d ", a[i]);

    return 0;
}


/*
 *  插入排序：
 *      1.输入
 *      2.指针从第二个元素开始向后遍历，比较指针前一个元素与此指针的大小，
 *        若前者大，则将此指针元素放入temp,并执行内层循环
 *      3.内层循环从外层循环指针前一个元素开始向前遍历，直到找到比temp小的位置
 *        并将遍历的每一个元素放到自身后一个位置
 *      4.最后将temp放入内层循环找到的位置处
 *      5.输出
 *
 *  时间复杂度：
 *      平均&最坏：O(n^2)
 *      最好：O(n)
 *  稳定性：稳定
 *
 */
