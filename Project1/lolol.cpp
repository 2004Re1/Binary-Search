#include <iostream>
#include <array>
int BinarySearch(int arr[], int first_index, int last_index,int target)
{
	int middle=(first_index + last_index)/2;

	while (arr[middle] != target)
	{
	    middle = (first_index + last_index) / 2;

		if (target > arr[middle])
		{
			first_index = middle + 1;
		}

		if (target < arr[middle])
		{
			last_index = middle - 1;
		}

		if (target == arr[middle])
		{
			return middle+1;
		}

	}

	return middle+1;


	return 0;
}

int main()
{
	int num[10] = { 12,14,15,17,19,25,67,89,90,100 };
	int first = 0;
	int last = (sizeof(num) / sizeof(num[0])) - 1;

	int goal;


	std::cout << "select number to search\n";

	for (int i=0;i < 10;i++)
		std::cout << num[i] << " ";
	std::cout << std::endl;

	std::cin >> goal;


	std::cout << "index of selected number is:\n";
	std::cout<<BinarySearch(num, first, last,goal);


	return 0;
}