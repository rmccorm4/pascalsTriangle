#include <iostream>

void pascalsTriangle(int n)
{
	int rows = n;
	int triangle[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			triangle[i][j] = 0;

	for(int i = 0; i < n; i++)
	{
		for(int k = n-i; k>-1; k--) std::cout << " ";
		for(int j = 0; j <= i; j++)
		{
			if(i==0 || j == 0) triangle[i][j] = 1;
			else triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
			std::cout << triangle[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int n;
	std::cout << "Enter the number of rows to calculate: ";
	std::cin >> n;
	pascalsTriangle(n);
	return 0;
}
