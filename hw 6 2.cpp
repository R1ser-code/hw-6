#include <iostream>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout << "Array:";
	for (int element = 0; element < 10; ++element)
	{
		std::cout << arr[element];
		if (element < 9)
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
	int min = arr[0];
	int max = arr[0];
	for (int element = 1; element < 10; ++element)
	{
		if (arr[element] < min)
		{
			min = arr[element];
		}
		if (arr[element] > max)
		{
			max = arr[element];
		}
	}
	std::cout << "Min Element:" << min << std::endl;
	std::cout << "Max Element:" << max << std::endl;
	return EXIT_SUCCESS;
}