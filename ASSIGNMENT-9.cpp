#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
    string str1 = "Hello, C++ Programming";

    cout << "Before moving:" << endl;
    cout << "str1 = " << str1 << endl;

    string str2 = std::move(str1);

    cout << "\nAfter moving:" << endl;
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    return 0;
}
