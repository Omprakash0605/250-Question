

#include <iostream>
using namespace std;

int main()
{
	int i, sum = 0;
	int n = 10;
	i = 1;                    // natural no. -1234567.......n

	while (i <= n) {
	
		sum += i;
		i++;
	}
	// printing the result
	cout<<"sum is "<<sum<<endl;
	return 0;
}
