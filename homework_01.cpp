#include"std_lib_facilities.h"
#include <iostream>
using namespace std;
#include <string.h>

class calculator
{
public:
	double getresult(string oper)
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
	}
	double m_num1;
	double m_num2;
};

void test01()
{

	calculator c;
	c.m_num1 = 10;
	c.m_num2 = 10;

	cout << c.m_num1 << " + " << c.m_num2 <<" = " << c.getresult("+") << endl;

	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getresult("-") << endl;

	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getresult("*") << endl;





};

int main() {
	
	cout << "welcome to our simple calculator,please enter expressions using floating-point numbers." << endl;
	test01();
	
		
	system("x");
	return 0;
}
//5. Improve that greeting by mentioning which operators are available and how to print and exit.
//5.we can use character[] store in greeting statment, and traverse the greeting word by while loop or for loop;