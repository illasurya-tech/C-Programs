//to print given value
#include<iostream>
using namespace std;
template<class T>
class Example
{
	public:
	T data;
	Example(T d)
	{
		data = d;
	}
	void display()
	{
		cout<<"first value is:"<<data<<endl;
	}
};
main()
{
	Example<int> e(10);
	Example<float> e1(1.5f);
	Example<double> e2(2.555);
	Example<char> e3('a');
	
	e.display();
	e1.display();
	e2.display();
	e3.display();
}
