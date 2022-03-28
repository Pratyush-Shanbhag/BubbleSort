#include <iostream>
#include "BubbleSort.h"

using namespace std;

void BubbleSort::bubbleSort() {
    int temp;
    bool swap;
cout << arr[0] << endl;
 /*   for(int i = 0; i < 10; i ++) {
        swap = false;
        for(int j = 0; i < 10-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if(!swap)
            break;
    }*/
}

void BubbleSort::displayArray() {
    cout << "Array:\n[";

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    cout << arr[9] << "]\n" << endl; 
}