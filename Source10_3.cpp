#include<iostream>

int** create_two_dim_array(int rows, int cols);
void fill_two_dim_array(int** arr, int rows, int cols);
void print_two_dim_array(int** arr, int rows, int cols);
void delete_two_dim_array(int** arr, int row);

int main()
{
	int rows{};
	int cols{};
	std::cout << "Enter number of rows: ";
	std::cin >> rows;
	std::cout << std::endl << "Enter number of columns: ";
	std::cin >> cols;
	int** arr{ create_two_dim_array(rows, cols) };
	std::cout << std::endl << "Multiplication table: " << std::endl;
	fill_two_dim_array(arr, rows, cols);
	print_two_dim_array(arr, rows, cols);
	delete_two_dim_array(arr, rows);
	return 0;
}

int** create_two_dim_array(int rows, int cols)
{
	int** arr{ new int* [rows] };
	for (int index{ 0 }; index < rows; ++index)
	{
		arr[index] = new int [cols];
	}
	return arr;
}
void fill_two_dim_array(int** arr, int rows, int cols)
{
	for (int row{ 0 }; row < rows; ++row)
	{
		for (int col{ 0 }; col < cols; ++col)
			arr[row][col] = (row + 1) * (col + 1);
	}
}
void print_two_dim_array(int** arr, int rows, int cols)
{
	for (int row{ 0 }; row < rows; ++row)
	{
		for (int col{ 0 }; col < cols; ++col)
		{
			std::cout << arr[row][col] << '\t';
		}
		std::cout << std::endl;
	}
}
void delete_two_dim_array(int** arr, int rows)
{
	for (int link{ 0 }; link < rows; ++link)
	{
		delete[] arr[link];
	}
	delete[] arr;
}