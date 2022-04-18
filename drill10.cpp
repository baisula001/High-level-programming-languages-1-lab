#include"std_lib_facilities.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class point
{
public:
	point(double x, double y)
	{
		this->m_x = x;
		this->m_y = y;
	}
	double m_x;
	double m_y;
};

 void test01()
 {
 	vector<point>original_points;

 	point p1(7, 9);
 	point p2(7, 9);
 	point p3(7, 9);
 	point p4(7, 9);
 	point p5(7, 9);
 	point p6(7, 9);
 	point p7(7, 9);

 	original_points.push_back(p1);
 	original_points.push_back(p2);
 	original_points.push_back(p3);
 	original_points.push_back(p4);
 	original_points.push_back(p5);
 	original_points.push_back(p6);
 	original_points.push_back(p7);

 	for (vector<point>::iterator it = original_points.begin(); it != original_points.end(); it++)
 	{
 		cout << "x = " << (*it).m_x << "y = " << (*it).m_y << endl;
 	}

 }

/* write into the file*/

void test02()
{
	ofstream ofs;

	ofs.open("mydata.txt", ios::out);

	ofs << "p1(7, 9) " << endl;
	ofs << "p1(7, 9) " << endl;
	ofs << "p1(7, 9) " << endl;
	ofs << "p1(7, 9) " << endl;
	ofs << "p1(7, 9) " << endl;
	ofs << "p1(7, 9) " << endl;
	ofs << "p1(7, 9) " << endl;


	ofs.close();
}

/*read the content of files*/

void test03()
{
	ifstream ifs;

	ifs.open("mydata.txt", ios::in);

	/*determine if this file could open*/

	if (!ifs.is_open())
	{
		cout << "open file is failed " << endl;
		return;
	}


	char buf[1024] = { 0 };
	while (ifs.getline(buf, 1024))
	{
		cout << buf << endl;
	}

	vector<point>processed_points;
	{
		processed_points.push_back(char buf);

		for (vector<point>::iterator it = processed_points.begin(); it != processed_points.end(); it++)
		{
			cout << "x = " << (*it).m_x << "y = " << (*it).m_y << endl;
		}
	}
	ifs.close();
}

//void test04()
//{
//	vector<point>processed_points;
//	processed_points.push_back(buf)
//
//	for (vector<point>::iterator it = original_points.begin(); it != original_points.end(); it++)
//	{
//			cout << "x = " << (*it).m_x << "y = " << (*it).m_y << endl;
//	}
//
//
//
//}


int main() {

	//test02();
	//test01();
	test03();
	return 0;
};