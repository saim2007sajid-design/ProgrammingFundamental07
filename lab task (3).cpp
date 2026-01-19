#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for the number of elements
    cout << "Enter the number of integers you want to input: ";
    while (!(cin >> n)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    int arr[n];
    int evenSum = 0, oddProduct = 1;
    bool oddExists = false;

    // Input array elements with input validation
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i])) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    // Calculate sum of even numbers and product of odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddProduct *= arr[i];
            oddExists = true;
        }
    }

    // Display results
    cout << "Sum of all even numbers: " << evenSum << endl;
    if (oddExists)
        cout << "Product of all odd numbers: " << oddProduct << endl;
    else
        cout << "No odd numbers entered." << endl;

    return 0;
}
