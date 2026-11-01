#include<iostream>

double* create_array(int sizeArray);

int main()
{
	int sizeArray{};
	std::cout << "Enter size of array: ";
	std::cin >> sizeArray;
	create_array(sizeArray);
	return 0;
}

double* create_array(int sizeArray)
{
	double* array{ new  double[sizeArray] {} };
	std::cout << "Your array: ";
	for (int index{ 0 }; index < sizeArray; index++)
	{
		std::cout << array[index] << ' ';
	}
	delete[] array;
	std::cout << std::endl;
	return array;
}
