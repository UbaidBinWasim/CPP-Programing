#include<iostream>
using namespace std;

int main() 
{
int a = 12, *b, **c, ***d;

// Part 1: Pointers and Values
b = &a;   // b is a pointer to an integer, assigned the address of variable a
*b = 12;  // The value at the address pointed by b is set to 12

// Part 2: Pointers to Pointers
c = &b;   // c is a pointer to a pointer to an integer, assigned the address of pointer b
**c = 13; // The value at the address pointed by c (which is the address of b) is set to 13

// Part 3: Pointers to Pointers to Pointers
d = &c;   // d is a pointer to a pointer to a pointer to an integer, assigned the address of pointer c
***d = 15;// The value at the address pointed by d (which is the address of c) is set to 15

// Display the values and addresses
cout << "a = " << a << endl;
cout << "&a = " << &a << endl;
cout << "b = " << b << endl;
cout << "*b = " << *b << endl;
cout << "&b = " << &b << endl;
cout << "c = " << c << endl;
cout << "*c = " << *c << endl;
cout << "**c = " << **c << endl;
cout << "d = " << d << endl;
cout << "*d = " << *d << endl;
cout << "**d = " << **d << endl;
cout << "***d = " << ***d << endl;
return 0;
}
