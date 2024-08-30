#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j=low;j<=high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[partition(arr, low, high)];
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target element: \n");
    scanf("%d", target);

    quickSort(arr, 0, n-1);
    int result = binarySearch(arr, 0, n-1, target);

    printf("%d\n", result);

    return 0;
}