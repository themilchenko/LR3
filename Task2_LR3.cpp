#include <iostream>
#include <cmath>
#include <vector>
int main() {
    int n;
    int i;
    int *arr = new int [n];
    std::cout << "Enter the number (n > 10) of values: ";
    std::cin >> n;
    std::cout<< std::endl << "Enter the numbers of array: ";
    for (i = 0; i < n; i++)
        std::cin >> arr[i];
    std::cout << std::endl << "Array: ";
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl << "Array (/3): ";
    for (i = 0; i < n; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            arr[i] /= 3;
            std::cout << arr[i] << " ";
        }
       else
           std::cout << arr[i] << " ";
    }    
    std::cout << std::endl << "Enter 2 numbers of array to count average value: ";
    int k1, k2;
    std::cout << std::endl << "enter the k1: ";
    std::cin >> k1;
    std::cout << std::endl << "enter the k2: ";
    std::cin >> k2;
    int sum = 0;
    for(i = k1 - 1; i <= k2 - 1; i++)
        sum += arr[i];
    double average = sum / abs(k1 - k2);
    std::cout << "Average value: " << average;
    return 0;
}
