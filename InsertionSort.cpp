#include<iostream>

using namespace std;

/* 挿入ソート */
void insertion_sort(int array[], int array_size) {
    int j = 0;

    //若干バブルソート的なやり方に近いかも。
    //挿入は難しいです。
    for (int i = 1; i < array_size; i++) {   // 先頭から順にソート
        j = i;
        while ((j > 0) && (array[j - 1] > array[j])) {   //整列済みの場合は処理しない
            swap(array[j - 1], array[j]);   // 整列されていない要素を交換
            j--;
        }
    }
}

#define ARR_SIZE 10
int main(void) {
    int array[] = { 2, 1, 8, 5, 4, 7, 9, 0, 6, 3 };
    int i = 0;

    printf("Before sort: ");
    for (i = 0; i < ARR_SIZE; i++) { printf("%d ", array[i]); }
    printf("\n");

    insertion_sort(array, ARR_SIZE);

    printf("After sort: ");
    for (i = 0; i < ARR_SIZE; i++) { printf("%d ", array[i]); }
    printf("\n");

    return 0;
}