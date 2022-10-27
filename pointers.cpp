
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pointer Declaration and initialization
    int num = 5;
    int *ptr = &num;

    cout << "num = " << num << endl;
    cout << "&num = " << &num << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "ptr = " << ptr << endl;
    cout << "&ptr = " << &ptr << endl;
    cout << "++(*ptr) = " << ++(*ptr) << endl;
}