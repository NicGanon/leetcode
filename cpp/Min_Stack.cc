#include <stack>
#include <assert.h>

class MinStack {
    public:
			MinStack(){};
			void push(int x);
			void pop();
			int top();
      int getMin();
    private:
			std::stack<int> data;
			std::stack<int> minData;
};

void MinStack::push(int x)
{
	data.push(x);
	int min = x;
	if (!minData.empty() && minData.top() < x) {
	    int min = minData.top();
	}
	
	minData.push(min);

}

void MinStack::pop()
{
	assert(!data.empty());
	
	data.pop();
	minData.pop();
}

int MinStack::top()
{
	assert(!data.empty());
	return data.top();
}

int MinStack::getMin()
{
	assert(!minData.empty());
	return minData.top();
}

