#include <iostream>
using namespace std;

// Define a struct to represent a Customer
struct Customer {
    string name;
    int age;
    string address;
};

int main() {
    int numCustomers;

    // Ask for the number of customers
    cout << "Enter the number of customers: ";
    cin >> numCustomers;
    cin.ignore(); // To ignore the newline character after cin

    // Declare an array of Customer structs
    Customer customers[numCustomers];

    // Loop to input details for each customer and store in the array
    for (int i = 0; i < numCustomers; i++) {
        cout << "\nEnter details for customer " << i + 1 << ":" << endl;

        cout << "Name: ";
        getline(cin, customers[i].name);

        cout << "Age: ";
        cin >> customers[i].age;

        cout << "Address: ";
        cin.ignore(); // Ignore newline left in buffer
        getline(cin, customers[i].address);
    }

    // Display all entered customer details
    cout << "\nCustomer Details:" << endl;
    for (int i = 0; i < numCustomers; i++) {
        cout << "\nCustomer " << i + 1 << ":" << endl;
        cout << "Name: " << customers[i].name << endl;
        cout << "Age: " << customers[i].age << endl;
        cout << "Address: " << customers[i].address << endl;
    }

    return 0;
}
