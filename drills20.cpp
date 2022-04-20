#include<iostream>
using namespace std;
#include<List>
#include<vector>



void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

void printvector(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

//赋值
void test01()
{
	/*display the each of element of array;*/
	
	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i] << "  ";
	};
	cout << endl;


	/*create the list container with 10 element;*/

	list<int>L1;

	L1.push_back(0);
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	L1.push_back(6);
	L1.push_back(7);
	L1.push_back(8);
	L1.push_back(9);

	/*display the elment */
	
	printList(L1);

	/*create the vector container with 10 element*/

	vector<int>v1;

	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(9);

	/*display the elment */
	
	printvector(v1);

	/*copy the value of array1 into to l2 array*/

	int arr2[10] = { 0 };
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
	{
		arr2[i] = arr1[i];
		cout << arr1[i] << "  ";

	}
	cout << endl;


	/*each of array's element add 2*/
	///*int temp = 0;*/
	//int arr2[10] = { 0 };
	//for (int i = 0; i < sizeof(arr2) ; i+=2)
	//{
	//	cout << arr2[i] << " ";
	//}
	//cout << endl;


	/*copy the value of list 1 into to list 2 container*/

	list<int>L2;
	L2 = L1;
	printList(L2);


	/*copy the value of vector 1 into to vector 2 container*/

	vector<int>v2(v1.begin(),v1.end());
	printvector(v2);




}


int main() 
{
	/*printout all the element*/
	test01();
	/*test02();*/



	system ("pause");

}