#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
		vector<int> num;
		if (numbers.empty())
				return num;
		vector<int> old = numbers;
		std::sort(numbers.begin(),numbers.end());
		vector<int>::iterator il = numbers.begin();
		vector<int>::iterator ig = numbers.end()-1;
		
		while (il < ig) {
		    if (*il + *ig == target) {
				    int less, greater;
						less = std::find(old.begin(),old.end(),*il) - old.begin();
            greater = std::find(old.begin(),old.end(),*ig)- old.begin();
						if (less > greater)
								std::swap(less,greater);
						num.push_back(++less);
						num.push_back(++greater);
						break;
				} else if (*il+*ig < target) 
						il++;
				else
						ig--;
		}
		return  num;
}

int main()
{
		int array[] = {5,75,25};
		vector<int> v(array,array+sizeof(array)/sizeof(int));
		
		int target = 100;
   	vector<int> num = twoSum(v,target);
    cout << num[0] << endl <<num[1] << endl;

}
