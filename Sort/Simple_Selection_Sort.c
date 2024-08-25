//
// Created by Administrator on 2024/8/25.
// 简单选择排序

#include <stdio.h>

#define MaxSize 5


void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


void SelectionSort(int a[], int n) {
    for (int i=0;i<n-1;i++) {
        int min = i;
        for (int j=i+1;j<n;j++)
            if (a[j] < a[min])
                min = j;

        if (min != i)
            swap(&a[i], &a[min]);
    }
}


int main() {
    int a[MaxSize];
    for (int i=0;i<MaxSize;i++)
        scanf("%d", &a[i]);

    SelectionSort(a, MaxSize);

    for (int i=0;i<MaxSize;i++)
        printf("%d ", a[i]);

    return 0;
}


