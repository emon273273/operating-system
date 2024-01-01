#include <iostream>
using namespace std;

int main() {
    int pageFaultCount = 0, pages[50], memory[20], frequency[20] = {0}, usedOrder[20] = {0};
    int numberOfPages, numberOfFrames, i, j, k;

    cout << "Enter number of pages:" << endl;
    cin >> numberOfPages;

    cout << "Enter the pages:" << endl;
    for (i = 0; i < numberOfPages; i++) {
        cin >> pages[i];
    }

    cout << "Enter number of frames:" << endl;
    cin >> numberOfFrames;

    cout << "The Page Replacement Process is -->" << endl;
    for (i = 0; i < numberOfPages; i++) {
        int page = pages[i];

        // Check if the page is in memory
        int inMemory = -1;
        for (j = 0; j < numberOfFrames; j++) {
            if (memory[j] == page) {
                inMemory = j;
                break;
            }
        }

        if (inMemory != -1) {
            // Page is in memory, update frequency
            frequency[inMemory]++;
        } else {
            // Page fault: Page is not in memory
            pageFaultCount++;

            if (i >= numberOfFrames) {
                // Memory is full, need to replace a page

                // Find the least frequently used page
                int leastFrequency = frequency[0];
                int leastUsedOrder = usedOrder[0];
                int position = 0;

                for (j = 1; j < numberOfFrames; j++) {
                    if (frequency[j] < leastFrequency || (frequency[j] == leastFrequency && usedOrder[j] < leastUsedOrder)) {
                        leastFrequency = frequency[j];
                        leastUsedOrder = usedOrder[j];
                        position = j;
                    }
                }

                // Replace with the new page
                memory[position] = page;
                frequency[position] = 1;
                usedOrder[position] = i;
            } else {
                // Memory has empty space
                memory[i] = page;
                frequency[i] = 1;
                usedOrder[i] = i;
            }
        }

        // Print the memory state after each page access
        for (k = 0; k < numberOfFrames; k++) {
            cout << "\t" << memory[k];
        }
        cout << "\tPage Fault No: " << pageFaultCount << endl;
    }

    cout << "The number of Page Faults using LFU is: " << pageFaultCount << endl;
    return 0;
}
