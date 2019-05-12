#include<iostream>
#include<string.h>
using namespace std;



class Base
{
public:

	virtual void print(string str)
	{
		cout << "print base class"<<endl;
		//cout << str << endl;
	}

	void show()
	{
		cout << "show base class";
	}
};

class Derived : public Base
{
	void print(string str)
	{
		cout << "print derived class";
	}

	void show()
	{
		cout << "show derived class";
	}
    
};

int main()
{
	Base* b;
	Derived D;
	//cout << sizeof(Base) << " " << "bytes"<<"\n";
	b = &D;
	//D = b;
	//cout <<"address of object b"<<" "<<&b<<"\n"<<"address of object D"<<" "<<&D<<"\n";
	b->print("gth");
	getchar();
	return 0;
}