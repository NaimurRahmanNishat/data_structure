// Quick Sort working divided and conqure system. The process of quicksort algorithm.
// 1. Select a pivot element from the array.
// 2. Partition the array into two parts: elements less than the pivot and elements greater than the pivot.(Divide and conqure)(low and high value)
// 3. Recursively sort the two partitions.
// i. pivot(p)
// ii. low(l)
// iii. high(h) 

#include <iostream>
using namespace std;
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[low];
        int i = low + 1, j = high;
        while (i <= j)
        {
            while (i <= high && arr[i] < pivot)
            {
                i++;
            }
            while (j >= low && arr[j] > pivot)
            {
                j--;
            }
            if (i < j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp1 = arr[low];
        arr[low] = arr[j];
        arr[j] = temp1;
        
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}
int main()
{
    int count;
    cout << "Input the array size: ";
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }
    quickSort(arr, 0, count - 1);
    cout << "Show the sorted value: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
