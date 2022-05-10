#include "std_lib_facilities.h"

int ga[10]{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };                /* ga is the arry name ,alias */


void f(int a[], int x)
{
    int la[10];

    for (int i = 0; i < 10; i++)
    {
        la[i] = a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << la[i] << " ";                           /* " " function is give the space to the each of element of array */
    }

    cout << endl;

    int* p = new int[10];                           /* initialize the point and put it into the heap area */

    for (int i = 0; i < 10; i++)
    {
        p[i] = a[i];                                        /* assgin the array ele to the p array */
    }

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;

    delete[] p;
}

int main()
{
    f(ga, 10);

    int aa[10];

    int x = 1;

    for (int i = 0; i < 10; i++)
    {
        x = x * (i + 1);                                        /* traversal the i element int the  Algorithmic expression */
        aa[i] = 1 * x;
    }

    f(aa, 10);

    return 0;
}
