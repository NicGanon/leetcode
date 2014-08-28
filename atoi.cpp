#include <iostream>
#include <math.h>
#include <limits.h>
#include <string.h>
using namespace std;

int atoi (const char *str) 
{
		if (str == NULL)
				return 0;
		const char *cur = str;
		while (*cur==' ')
				++cur;
		if (*cur == '\0')
				return 0;
		bool flag = *cur == '-' ? 0 : 1;
		int sum = 0;
		if (*cur=='-'|| *cur=='+')
				cur++;
		int length = strlen(cur);
		int i =0;
		while (cur[i] >= '0' && cur[i] <= '9') {
		    if (sum > INT_MAX/10 || (sum == INT_MAX/10 && cur[i]-'0'>7)) {
				    if (flag)
								return INT_MAX;
						else
								return INT_MIN;
				}
				sum *=10;
				sum += cur[i] - '0';
        
				++i;
		}
		
		
		if (!flag) sum = -sum;
		    return sum;

}

int main()
{
		char *s = "     10522545459";
    char *s1 = "010";
		char *s2 = "-2147483647";
		//int  a  = 10522545459; 
		cout << atoi(s) << endl;
		cout << atoi(s1) << endl;
		cout << atoi(s2) << endl;
		//cout << a << endl;
		
		return 0;
}
