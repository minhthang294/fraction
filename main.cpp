#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "Fraction.h"
using namespace std;
template <typename T>
inline T Max(T const &a, const &b)
{
    return (a > b?a:b);
}

template <class InputIterator>
inline void printElements(InputIterator begin, InputIterator end)
{
    for (InputIterator i = begin; i != end; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

void testIterator()
{
    vector<int> vint;
    vint.push_back(1);vint.push_back(5);vint.push_back(2);
    vint.push_back(10);vint.push_back(3);vint.push_back(12);
    int maxInt = *max_element(vint.begin(), vint.end());

    cout << "Max in vector: " << maxInt << endl;
    printElements(vint.begin(), vint.end());

    list<Fraction> lf;
    Fraction f1(1, 2); Fraction f2(2, 3);
    Fraction f3(1, 5); Fraction f4(2, 5);
    lf.push_back(f1); lf.push_back(f2);
    lf.push_back(f3); lf.push_back(f4);

    cout << "List: " << endl;
    printElements(lf.begin(), lf.end());

    Fraction maxF = *max_element(lf.begin(), lf.end());
    cout << "Max fraction in list: " << maxF << endl;

    int a[5] = {1, 4, 5, 10, 9};
    cout << "Array: ";
    printElements(&a[0], &a[4]);
}


int main()
{
    testIterator();
//    int a = 5;
//    int b = 10;
//    cout << "Max integer: " << Max(a, b) << endl;
//    float x = 10.0;
//    float y = 5.0;
//    cout << "Max float: " << Max(x, y) << endl;

//    Fraction f1(1, 2);
//    Fraction f2(2, 3);
//    cout << "Max fraction: " << Max(f1, f2) << endl;
////    Fraction f1(1, 4);
////    Fraction f2(2, 4);
////    if (f1 == f2) cout << "Equal!\n";
////    else cout << "Not equal!\n";
//    Fraction f1;
//    cout << "Nhap phan so: ";
//    cin >> f1;
//    f1.display();
////    Fraction f3 = f1 + f2; // f1.operator+(f2);
////    cout << f1 << "+" << f2 << "=" << f3 << "\n";
//    return 0;
}
