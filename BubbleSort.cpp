#include <iostream>
#include "BubbleSort.h"

using namespace std;

void BubbleSort::bubbleSort() {
    int temp;

    for(int i = 0; i < 9; i ++) {
        for(int j = 0; i < 9 - i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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