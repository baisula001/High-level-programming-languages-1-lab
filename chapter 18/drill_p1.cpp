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
        cout << la[i] << " ";                           
    }

    cout << endl;

    int* p = new int[10];                           /* Define a pointer p to int,initialize it with an array allocated on free store with
                                                        the same number of elements */

    for (int i = 0; i < 10; i++)
    {
        p[i] = a[i];                                        /* assgin the array ele to the p array */
    }

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;

    delete[] p;                                     /* Deallocate (shi fang) the free-store array */
}

int main()
{
    f(ga, 10);                                              /* Call f() with ga as its argument */

    int aa[10];                   /*Define an array aa with ten elements,initialize it with the first ten factorial values*/

    int x = 1;

    for (int i = 0; i < 10; i++)
    {
        x = x * (i + 1);                                        /* traversal the i element int the  Algorithmic expression */
        aa[i] = 1 * x;
    }

    f(aa, 10);                                              /* Call f() with aa as its argument */

    return 0;
}
