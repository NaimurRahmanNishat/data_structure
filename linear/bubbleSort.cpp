// bubble sort
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {  // Fixed inner loop condition
            if(arr[j] > arr[j+1]) {  // Added if statement for comparison
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 58, 48, 6, 54, 47};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int k = 0; k < n; k++) {
        cout << arr[k] << "  ";
    }
    return 0;
}


#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {  // Fixed inner loop condition
            if(arr[j] > arr[j+1]) {  // Added if statement for comparison
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout<<"Enter array number: ";
    cin>>n;
    int arr[n];
    cout<<"Input array index: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout <<"Enter output: ";
    for(int k = 0; k < n; k++) {
        cout<< arr[k] << "  ";
    }

    return 0;
}