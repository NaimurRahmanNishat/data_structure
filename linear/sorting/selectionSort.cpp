// Selection sort 
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    int i,j;
    for(i=0; i<n-1; i++){  // first selection the 0 index 
        int min=i;   // when i=0 then min=0(In the first time i=0)
        for(j=i+1; j<n; j++){  // j loop start in second index this value is 1. 
            if(arr[j]<arr[min]){  // arr[j] means j number index value.(the second index value is 13) and arr[min] means min/i number index value.(the first index value is 9) again go back the second loop and check the condition.
                min=j;  // check the condition and continue the loop in last number.
            }
        }
        if(min!=i){   // min! value is 4 because this second loop last index number is 4. i value is 0. (4!=0)
            int temp=arr[i];  // This is swapping part.
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main(){
    int arr[] = {9,13,6,21,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << "  ";
    }
    return 0;
}



// User input selectionSort 
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    int i,j;
    for(i=0; i<n-1; i++){  // first selection the 0 index 
        int min=i;   // when i=0 then min=0(In the first time i=0)
        for(j=i+1; j<n; j++){  // j loop start in second index this value is 1. 
            if(arr[j]<arr[min]){  // arr[j] means j number index value.(the second index value is 13) and arr[min] means min/i number index value.(the first index value is 9) again go back the second loop and check the condition.
                min=j;  // check the condition and continue the loop in last number.
            }
        }
        if(min!=i){   // min! value is 4 because this second loop last index number is 4. i value is 0. (4!=0)
            int temp=arr[i];  // This is swapping part.
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Input array index: ";
        cin >> arr[i];
    }
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << "  ";
    }
    return 0;
}