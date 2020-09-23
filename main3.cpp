#include <iostream>
#include <vector>
#include <cmath>
int main() {
    int m, i, sum = 0;
    std::cout << "Enter the number of array (>5): ";
    std::cin >> m;
    std::vector <int> a(m);
    std::cout << "Enter numbers of array: ";
    for (i = 0; i < m; i++)
        std::cin >> a[i];
    std::cout << "Array: ";
    for (i = 0; i < m; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
    std::cout << "Array with my variant: ";
    a.push_back(16);
    for (i = 0; i < m + 1; i++)
        std::cout << a[i] << " ";
    for (i = 0; i < m + 1; i++)
        sum += pow(a[i], 2);
    std::cout << std::endl << "Sum: " << sum;
    std::cout << std::endl << "Final array: ";
    for (i = 0; i < m +1; i++)
    {
        if (a[i] > 3)
        {
            a.erase(a.begin()+i);
            break;
        }
    }
    for (i = 0; i < m; i++)
        std::cout << a[i] << " ";
    return 0;
}