#include "../lib_files/std_lib_facilities.h"

namespace X {
    int var;
    void print()
    {
        cout << var << endl;
    }
}

namespace Y {
    int var;
    void print()
    {
        cout << var << endl;
    }
}

namespace Z {
    int var;
    void print()
    {
        cout << var << endl;
    }
}

int main()
{
    X::var = 7;
    X::print();     // print X variable
    using namespace Y;
    var = 9;
    print();        // print y variable
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();    // print Z variable
    }
    print();        // print Y variable
    X::print();     // print X variable
}
