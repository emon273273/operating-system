#include <iostream>
using namespace std;

int main() {
    int pageFaultCount = 0, pages[50], memory[20], memoryIndex = 0, numberOfPages, numberOfFrames, i, j, k;

    cout << "Enter number of pages:" << endl;
    cin >> numberOfPages;

    cout << "Enter the pages:" << endl;
    for (i = 0; i < numberOfPages; i++) {
        cin >> pages[i];
    }

    cout << "Enter number of frames:" << endl;
    cin >> numberOfFrames;
    for (i = 0; i < numberOfFrames; i++) {
        memory[i] = -1;
    }

    cout << "The Page Replacement Process is -->" << endl;
    for (i = 0; i < numberOfPages; i++) {
        for (j = 0; j < numberOfFrames; j++) {
            if (memory[j] == pages[i]) {
                break;
            }
        }
        if (j == numberOfFrames) {
            memory[memoryIndex] = pages[i];
            memoryIndex++;
            pageFaultCount++;
        }
        for (k = 0; k < numberOfFrames; k++) {
            cout << "\t" << memory[k];
        }
        if (j == numberOfFrames) {
            cout << "\tPage Fault No: " << pageFaultCount;
        }
        cout << endl;
        if (memoryIndex == numberOfFrames) {
            memoryIndex = 0;
        }
    }
    cout << "The number of Page Faults using FIFO is: " << pageFaultCount << endl;
    return 0;
}
