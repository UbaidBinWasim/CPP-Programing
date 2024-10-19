#include <iostream>
using namespace std;

int main() {
    int data[] = {10, 20, 39, 46, 78, 89, 100};
    int item = 85;   // The item we are searching for
    int lb = 0;      // Lower bound
    int ub = 6;      // Upper bound (last index)
    int mid;         // Middle index

    mid = (lb + ub) / 2;

    while (data[mid] != item && lb <= ub) {
        if (item > data[mid])
            lb = mid + 1;
        else
            ub = mid - 1;
        mid = (lb + ub) / 2;
    }

    if (data[mid] == item)
        cout << "Item exists at position " << mid << endl;
    else
        cout << "Item does not exist" << endl;
		
	//	return 0;
}