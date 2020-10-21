#include <iostream>
#include <ctime>
#include <cmath>
int main()
{
	std::srand(std::time(nullptr));
	int a[10];
	std::cout << "Array: ";
	for (int i = 0; i < 10; i++)
	{
		a[i] = std::rand() % 21 - 10;
		std::cout << a[i] << " ";
	}
	std::cout << std::endl << "Resulting sum: ";
	int sum = pow(a[0],2) + pow(a[1],2) + pow(a[5],2);
	std::cout << pow(a[0],2) << " + " << pow(a[1],2) << " + " << pow(a[5],2) << " = " << sum;
	return 0;
}
