#include <iostream>
using namespace std;


template<typename T>void Swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}



int main(){

    //change int type of varible
    int n1 = 100, n2 = 200;
    Swap(&n1, &n2);
    cout << n1 << ", " << n2 << endl;

    //change double type of variable
    float d1 = 12.5, d2 = 56.93;
    Swap(&d1, &d2);
    cout << d1 << ", " << d2 << endl;

    //change char type of variable
    char c1 = 'A', c2 = 'B';
    Swap(&c1, &c2);
    cout << c1 << ", " << c2 << endl;

    //change string type of variable
    string s1 = "b", s2 = "c";
    Swap(&s1, &s2);
    cout << s1 << ", " << s2 << endl;
    return 0;
	


}
not finished yet
