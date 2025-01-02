#include <iostream>
using namespace std;

int main() {
    int size, position, value;

    // Input the size of the array
    cout << "Input the size of array: ";
    cin >> size;

    // Declare the array with a size one larger to accommodate insertion
    int array[size + 1];

    // Input array elements
    cout << "Input " << size << " elements in the array in ascending order:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "element - " << i << " : ";
        cin >> array[i];
    }

    // Display the current list of the array
    cout << "The current list of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Input the value to be inserted
    cout << "Input the value to be inserted: ";
    cin >> value;

    // Input the position to insert the value
    cout << "Input the Position, where the value to be inserted: ";
    cin >> position;

    // Check for valid position
    if (position < 1 || position > size + 1) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Adjust the position for 0-based indexing
    position--;

    // Shift elements to the right to make space for the new value
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new value
    array[position] = value;

    // Display the new list of the array
    cout << "After inserting the element, the new list is:" << endl;
    for (int i = 0; i <= size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
