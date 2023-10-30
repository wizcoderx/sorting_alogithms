//the code is represntation of bubble sort algorithm
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int counter = 1; // Moved inside the main function

    while (counter < n) { // Moved inside the main function
        for (int i = 0; i < n - counter; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    // The for loop for printing the sorted array should be inside the main function.
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

