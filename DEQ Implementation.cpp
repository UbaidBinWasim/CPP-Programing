#include <iostream>
using namespace std;

const int max = 5;  // Maximum size of the deque
int dq[max];  // Array to store deque elements
int left = 0, right = max - 1;  // Pointers for left and right insert/delete
int count = 0;  // Count of current elements in deque

// Function to insert an element from the left side
void leftInsert() {
    if (count == max) {
        cout << "Deque is full..." << endl;
    } else {
        int item;
        cout << "Enter value from left: ";
        cin >> item;

        // Move left pointer backward
        left = (left - 1 + max) % max;
        dq[left] = item;  // Insert the item at the left position
        count++;
    }
}

// Function to insert an element from the right side
void rightInsert() {
    if (count == max) {
        cout << "Deque is full..." << endl;
    } else {
        int item;
        cout << "Enter value from right: ";
        cin >> item;

        // Insert the item at the right position
        dq[right] = item;
        // Move right pointer backward
        right = (right - 1 + max) % max;
        count++;
    }
}

// Function to delete an element from the left side
void leftDelete() {
    if (count == 0) {
        cout << "Deque is empty..." << endl;
    } else {
        int item = dq[left];  // Remove the item from the left position
        dq[left] = 0;  // Clear the deleted item

        // Move left pointer forward
        left = (left + 1) % max;
        count--;
        cout << "Item deleted: " << item << endl;
    }
}

// Function to delete an element from the right side
void rightDelete() {
    if (count == 0) {
        cout << "Deque is empty..." << endl;
    } else {
        // Move right pointer forward
        right = (right + 1) % max;
        int item = dq[right];  // Remove the item from the right position
        dq[right] = 0;  // Clear the deleted item
        count--;
        cout << "Item deleted: " << item << endl;
    }
}

// Function to display the current state of the deque
void display() {
    if (count == 0) {
        cout << "Deque is empty..." << endl;
    } else {
        cout << "Deque contents: ";
        for (int i = 0, index = left; i < count; i++) {
            cout << dq[index] << " ";
            index = (index + 1) % max;  // Move to the next element circularly
        }
        cout << endl;
    }
}

int main() {
    int choice;

    do {
        // Menu options
        cout << "1. Insert from left." << endl;
        cout << "2. Insert from right." << endl;
        cout << "3. Delete from left." << endl;
        cout << "4. Delete from right." << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                leftInsert();  // Left insertion
                break;
            case 2:
                rightInsert();  // Right insertion
                break;
            case 3:
                leftDelete();  // Left deletion
                break;
            case 4:
                rightDelete();  // Right deletion
                break;
            case 5:
                display();  // Display deque
                break;
            default:
                break;
        }

    } while (choice != 6);  // Loop until the user chooses to exit

    return 0;
}