#include <iostream>
#include <vector>
#include <cmath>

int main() 
{
    int m, sum = 0;
    std::cout << "Enter the number of array (>5): ";
    std::cin >> m;
    std::vector <int> a(m);
    std::cout << "Enter numbers of array: ";
    for (int i = 0; i < a.size(); i++)
        std::cin >> a[i];
    std::cout << "Array: ";
    for (int i : a)
        std::cout << i << " ";
    std::cout << std::endl;
    std::cout << "Array with my variant: ";
    a.push_back(16);
    for (int i : a)
        std::cout << i << " ";
    for (int i = 0; i < a.size(); i++)
        sum += pow(a[i], 2);
    std::cout << std::endl << "Sum: " << sum;
    std::cout << std::endl << "Final array: ";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 3)
        {
            a.erase(a.begin() + i);
            break;
        }
    }
    for (int i : a)
        std::cout << i << " ";
    return 0;
}
