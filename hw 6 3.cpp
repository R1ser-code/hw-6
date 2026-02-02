#include <iostream>

int main()
{
	int rows = 3;
	int cols = 6;
	int arr[3][6] = {
		{1,2,3,4,5,6},
		{7,8,9,10,11,12},
		{13,14,15,16,17,18}
	};
	std::cout << "Array:" << std::endl;
	for (int row = 0; row < 3; ++row)
	{
		for (int col = 0; col < 6; ++col)
		{
			std::cout << arr[row][col] << "\t";
		}
		std::cout << std::endl;
	}
	int minIn = arr[0][0];
	int minRow = 0;
	int minCol = 0;
	int maxIn = arr[0][0];
	int maxRow = 0;
	int maxCol = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (arr[i][j] < minIn) {
				minIn = arr[i][j];
				minRow = i;
				minCol = j;
			}
			if (arr[i][j] > maxIn) {
				maxIn = arr[i][j];
				maxRow = i;
				maxCol = j;
			}
		}
	}
	
	std::cout << "Index Min Element:" << minRow << " " << minCol << std::endl;
	std::cout << "Index Max Element:" << maxRow << " " << maxCol << std::endl;
	
	

	return EXIT_SUCCESS;
}