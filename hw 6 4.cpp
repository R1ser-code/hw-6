#include <iostream>

int main() {
    int arr[] = { 10,2,4,1,5,6,8,7,9,3 };
    std::cout << "Unsorted array:";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 9; ++i) {
        for (int j = 9; j > i; --j) {
            if (arr[j] < arr[j - 1]) {
                int sw = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = sw;
            }
        }
    }
    std::cout << "Sorted array:";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}