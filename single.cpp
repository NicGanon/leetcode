#include <iostream>
#include <math.h>

using namespace std;


int main()
{
		int a[3] = {-1,-1,-2};
		int sum =a[0];
		for (int i =1 ;i<3; ++i)
				sum^=a[i];
		cout << sum << endl;

		return 0;
}
