#include <iostream>
using namespace std;

int main() {
    int number = 5;
    int* ptr1 = &number;
    int** ptr2 = &ptr1;

    **ptr2 = 10;
