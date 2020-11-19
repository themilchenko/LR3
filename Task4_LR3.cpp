#include <iostream>
#include <string>

int main()
{
	int k = 0;
	std::string string;
	std::cout << "Enter an arbitrary string: ";
	std::getline(std::cin, string);
	std::cout << "Your string: " << string << std::endl << std::endl;
	std::string sogl = "QWRTPSDFGHJKLZXCVBNMqwrtpsdfghjklzxcvbnm";
	for (int i = 0; i < string.size(); i++)
		for (int j = 0; j < sogl.size(); j++)
			if (string[i] == sogl[j])
				k++;
	std::cout << "Your string size: " << string.length() << std::endl;
	std::cout << "Number of consonant spells in your string: " << k;

	std::cout << std::endl << std::endl;

	std::cout << "Enter the values l1 and l2 to print string." << std::endl;
	int l1, l2;
	std::cout << "Enter the value of l1: ";
	std::cin >> l1;
	std::cout << "Enter the value of l2: ";
	std::cin >> l2;
	std::cout << "Editten string: " << string.substr(l1, abs(l2 - l1));

	std::cout << std::endl << std::endl;

	std::string word;
	std::string can = "Can you can a can as a canner can can a can?";
	std::cout << "Enter the your word to change word 'can' on your's: ";
	std::cin >> word;
	for (int i = 0; i < can.size(); i++)
		if (((can.substr(i, 4) == "can ") || (can.substr(i, 4) == "Can ") || (can.substr(i, 4) == "can?"))
			&& (can.substr(i, 4) != "cann"))
		{
			can.erase(i, 3);
			can.insert(i, word);
		}
	std::cout << "Editten string: " << can;
	return 0;
}
