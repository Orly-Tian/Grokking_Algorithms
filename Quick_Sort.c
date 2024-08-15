//
// Created by Administrator on 2024/8/15.
// 快速排序

#include <stdio.h>

#define MaxSize 10

int Partition(int a[], int low, int high) {
    // 初始化pivot为数组第一个元素
    int pivot = a[low];

    // 若low == high，则已找到pivot位置并跳出循环
    while (low < high) {

        // 向左移动high索引，若找到小于pivot的值，则移动至low索引处
        while (low<high && pivot<=a[high])
            high--;
        a[low] = a[high];

        // 向右移动low索引，若找到大于pivot的值，则移动至high索引处
        while (low<high && pivot>=a[low])
            low++;
        a[high] = a[low];

    }

    // 划分完毕，此时low与high指向同一位置并跳出循环
    // 并且在此位置的左侧皆小于pivot，右侧皆大于pivot，将pivot赋值到此位置
    a[low] = pivot;

    // 返回pivot索引，以便于递归函数时下次执行
    return low;
}


void QuickSort(int a[], int low, int high) {
    if (low < high) {
        int pivotpos = Partition(a, low, high);
        QuickSort(a, low, pivotpos-1);
        QuickSort(a, pivotpos+1, high);
    }
}


int main() {
    int a[MaxSize];
    for (int i=0;i<MaxSize;i++)
        scanf("%d", &a[i]);

    QuickSort(a, 0, MaxSize-1);

    for (int i=0;i<MaxSize;i++)
        printf("%d ", a[i]);

    return 0;
}


/*
 *  快速排序：
 *      1.输入
 *      2.函数QuickSort(a[], low, high)记录每次划分的pivotpos，
 *        若low < high，则将povit前后段分别递归
 *      3.划分函数Partition(a[], low, high)若low < high，则
 *          将小于pivot的值放在左侧，大于pivot的值放在右侧
 *          返回pivot的索引
 *      4.递归QuickSort函数
 *      5.输出
 *
 *  时间复杂度：
 *      平均&最好：O(n*logn)
 *      最坏：O(n^2)
 *  稳定性：不稳定
 *
 */
