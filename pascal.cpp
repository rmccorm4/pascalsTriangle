#include<iostream>

long factorial(int n)
{
	long result=1;
	for(int i=1;i<=n;i++)
	{
		result*=i;
	}
	return result;
}

void pascal_triangle(int r)
{
	int i,j,k;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<(r-i-2);j++)
			cout<<" ";
		for(k=0;k<=i;k++)
			cout<<factorial(i)/(factorial(k)*factorial(i-k)));
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter the Number of rows Wnated in Pascal's Triangle";
	cin>>n
        cout<<endl;
	pascal_triangle(n);
	return 0;
}

	
