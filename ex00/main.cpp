#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(){

	try
	{
		int arr[] = {1, 4, 6, 13 ,4 , 2, 66, 3};
		size_t len = sizeof(arr) / sizeof(arr[0]);

		std::cout << "Contain of the array\n";
		for (size_t i = 0; i <= len  - 1; i++)
		{
			if (i == 0)
				std::cout << "{";
			std::cout << arr[i];
			if (i != len - 1)
				std::cout << ", ";
			if (i == len - 1)
			{
				std::cout << "}" << std::endl;
			}
		}
		std::cout << std::endl;

		std::cout << "size of the array = " << len << std::endl;
		std::vector<int> tab(arr, arr + len);
		std::vector<int>::iterator it = easyfind(tab, 2);
		std::cout << "We found : " << *it  << " in the array!" << std::endl;
	} catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
