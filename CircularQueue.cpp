#include <iostream>
using namespace std;

// Maximum size of the queue
//#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

// Function to add an element to the queue (enqueue)
void enqueue(int item) {
    // Check if the queue is full
    if ((rear + 1) % SIZE == front) {
        cout << "Queue is full..." << endl;
        return;
    }

    // If queue is empty, initialize front and rear to 0
    if (front == -1) {
        front = 0;
    }

    // Move rear to the next position in a circular manner
    rear = (rear + 1) % SIZE;
    queue[rear] = item;
    cout << item << " added to the queue." << endl;
}

// Function to remove an element from the queue (dequeue)
void dequeue() {
    // Check if the queue is empty
    if (front == -1) {
        cout << "Queue is empty..." << endl;
        return;
    }

    cout << queue[front] << " is removed from the queue." << endl;

    // If there is only one element, reset the queue
    if (front == rear) {
        front = rear = -1;
    } else {
        // Move front to the next position in a circular manner
        front = (front + 1) % SIZE;
    }
}

// Function to display the queue in horizontal format
void display() {
    // Check if the queue is empty
    if (front == -1) {
        cout << "Queue is empty..." << endl;
        return;
    }

    cout << "Queue elements (Horizontal Display):" << endl;

    // Top border of the boxes
    for (int i = 0; i < SIZE; i++) {
        cout << "+----";
    }
    cout << "+" << endl;

    // Values inside the boxes
    for (int i = 0; i < SIZE; i++) {
        if ((front <= rear && i >= front && i <= rear) || (front > rear && (i >= front || i <= rear))) {
            // Print the values in queue
            if (queue[i] < 10) {
                cout << "|  " << queue[i] << " ";
            } else {
                cout << "| " << queue[i] << " ";
            }
        } else {
            // Empty slot
            cout << "|    ";
        }
    }
    cout << "|" << endl;

    // Bottom border of the boxes
    for (int i = 0; i < SIZE; i++) {
        cout << "+----";
    }
    cout << "+" << endl;

    // Print front and rear pointers below the boxes
    for (int i = 0; i < SIZE; i++) {
        if (i == front && i == rear) {
            cout << "  F&R";
        } else if (i == front) {
            cout << "  F  ";
        } else if (i == rear) {
            cout << "  R  ";
        } else {
            cout << "     ";
        }
    }
    cout << endl;
}

int main() {
    int choice, item;

    while (true) {
        // Display menu options
        cout << "\n1. Add Number to QUEUE (Enqueue)" << endl;
        cout << "2. Remove Number From QUEUE (Dequeue)" << endl;
        cout << "3. Display The QUEUE" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Enqueue operation
                cout << "Input the number: ";
                cin >> item;
                enqueue(item);
                break;
            case 2: // Dequeue operation
                dequeue();
                break;
            case 3: // Display the queue
                display();
                break;
            case 4: // Exit
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
