#include <iostream>
#include "BubbleSort.h"

using namespace std;

void BubbleSort::bubbleSort() {
    int temp;

    for(int i = 0; i < 9; i++) {
        if(arr[i] > arr[i+1]) {
            arr[i] = temp;
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void BubbleSort::displayArray() {
    cout << "Array:\n[";

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    cout << arr[9] << "]\n" << endl; 
}