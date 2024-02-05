#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int intArr[] = {5, 2, 8, 1, 9};
    double doubleArr[] = {3.5, 1.2, 7.8, 2.9, 4.1};
    char charArr[] = {'b', 'd', 'a', 'c'};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
   
