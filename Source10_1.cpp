#include<iostream>

int main()
{
	int sizeArray{};
	std::cout << "Enter size of array: ";
	std::cin >> sizeArray;
	int* array{ new  int[sizeArray] };
	std::cout << std::endl << "Enter elements of array" << std::endl;
	for (int index{ 0 }; index < sizeArray; index++)
	{
		std::cout << "arr[" << index << "]: ";
		std::cin >> array[index];
		std::cout << std::endl;
	}
	std::cout << "Your array: ";
	for (int index{ 0 }; index < sizeArray; index++)
	{
		std::cout << array[index] << ' ';
	}
	std::cout << std::endl;
	delete[] array;
	return 0;
}