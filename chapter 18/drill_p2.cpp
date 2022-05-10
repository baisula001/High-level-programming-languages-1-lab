#include "std_lib_facilities.h"

vector<int> gv{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };            /* global arry ga*/

void f(vector<int> v)                                               /* Define a function f() taking an int array argument*/
{
    vector<int> lv(v.size());                                       /* display the number of array element */

    lv = v;

    for (int i = 0; i < lv.size(); i++)
    {
        cout << lv[i] << " ";
    }

    cout << endl;

    vector<int> lv2 = v;

    for (int i = 0; i < lv2.size(); i++)
    {
        cout << lv2[i] << " ";
    }

    cout << endl;

}

int main()
{
    f(gv);                                              /* Call f() with ga as its argument. */

    vector<int> vv(10);

    int x = 1;

    for (int i = 0; i < 10; i++)
    {
        x = x * (i + 1);
        vv[i] = 1 * x;
    }

    f(vv);

    return 0;

}
