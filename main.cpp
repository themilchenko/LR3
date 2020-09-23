#include <iostream>
#include <ctime>
#include <cmath>
int main()
{
    std::srand(std::time(0));
    int arr1[10];
    std::cout << "Array: ";
    for (int i = 0; i < 10; i++) {
        arr1[i] = std::rand() % 21 - 10;
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl << "Resulting sum: ";
    int sum = pow(arr1[0],2) + pow(arr1[1],2) + pow(arr1[5],2);
    std::cout << pow(arr1[0],2) << " + " << pow(arr1[1],2) << " + " << pow(arr1[6],2) << " = " << sum;
    return 0;
}