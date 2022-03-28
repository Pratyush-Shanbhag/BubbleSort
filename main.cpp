#include <iostream>
#include <fstream>
#include "BubbleSort.h"
#include "ReadWrite.h"

using namespace std;

int main() {
    ReadWrite rw;
    BubbleSort bs;

    rw.readFile("Array.txt", bs.arr);
    bs.displayArray();
    bs.bubbleSort();
    bs.displayArray();
    rw.writeFile(bs.arr);
    return 0;
}