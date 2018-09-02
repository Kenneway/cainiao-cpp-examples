#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    // test type
    cout << "************ test type ************" << endl;

    // sizeof() 获取各种数据类型的字节数

    cout << "bool";
    cout << "\t\t所占字节数" << sizeof(bool);
    cout << "\t\t最大值" << numeric_limits<bool>::max();
    cout << "\t\t最小值" << numeric_limits<bool>::min();
    cout << endl;

    cout << "char";
    cout << "\t\t所占字节数" << sizeof(char);
    cout << "\t\t最大值" << numeric_limits<char>::max();
    cout << "\t\t最小值" << numeric_limits<char>::min();
    cout << endl;

    cout << "signed char";
    cout << "\t\t所占字节数" << sizeof(signed char);
    cout << "\t\t最大值" << numeric_limits<signed char>::max();
    cout << "\t\t最小值" << numeric_limits<signed char>::min();
    cout << endl;

    cout << "unsigned char";
    cout << "\t\t所占字节数" << sizeof(unsigned char);
    cout << "\t\t最大值" << numeric_limits<unsigned char>::max();
    cout << "\t\t最小值" << numeric_limits<unsigned char>::min();
    cout << endl;

    cout << "wchar_t";
    cout << "\t\t所占字节数" << sizeof(wchar_t);
    cout << "\t\t最大值" << numeric_limits<wchar_t>::max();
    cout << "\t\t最小值" << numeric_limits<wchar_t>::min();
    cout << endl;

    cout << "short";
    cout << "\t\t所占字节数" << sizeof(short);
    cout << "\t\t最大值" << numeric_limits<short>::max();
    cout << "\t\t最小值" << numeric_limits<short>::min();
    cout << endl;

    cout << "int";
    cout << "\t\t所占字节数" << sizeof(int);
    cout << "\t\t最大值" << numeric_limits<int>::max();
    cout << "\t\t最小值" << numeric_limits<int>::min();
    cout << endl;

    cout << "unsigned";
    cout << "\t\t所占字节数" << sizeof(unsigned);
    cout << "\t\t最大值" << numeric_limits<unsigned>::max();
    cout << "\t\t最小值" << numeric_limits<unsigned>::min();
    cout << endl;

    cout << "long";
    cout << "\t\t所占字节数" << sizeof(long);
    cout << "\t\t最大值" << numeric_limits<long>::max();
    cout << "\t\t最小值" << numeric_limits<long>::min();
    cout << endl;

    cout << "unsigned long";
    cout << "\t\t所占字节数" << sizeof(unsigned long);
    cout << "\t\t最大值" << numeric_limits<unsigned long>::max();
    cout << "\t\t最小值" << numeric_limits<unsigned long>::min();
    cout << endl;

    cout << "double";
    cout << "\t\t所占字节数" << sizeof(double);
    cout << "\t\t最大值" << numeric_limits<double>::max();
    cout << "\t\t最小值" << numeric_limits<double>::min();
    cout << endl;

    cout << "long double";
    cout << "\t\t所占字节数" << sizeof(long double);
    cout << "\t\t最大值" << numeric_limits<long double>::max();
    cout << "\t\t最小值" << numeric_limits<long double>::min();
    cout << endl;

    cout << "float";
    cout << "\t\t所占字节数" << sizeof(float);
    cout << "\t\t最大值" << numeric_limits<float>::max();
    cout << "\t\t最小值" << numeric_limits<float>::min();
    cout << endl;

    cout << "size_t";
    cout << "\t\t所占字节数" << sizeof(size_t);
    cout << "\t\t最大值" << numeric_limits<size_t>::max();
    cout << "\t\t最小值" << numeric_limits<size_t>::min();
    cout << endl;

    cout << "string";
    cout << "\t\t所占字节数" << sizeof(string);
    cout << "\t\t最大值" << numeric_limits<string>::max();
    cout << "\t\t最小值" << numeric_limits<string>::min();
    cout << endl;

    // test typedef
    cout << "************ test typedef ************" << endl;

    // typedef声明 为一个已有的类型取一个新的名字
    // typedf [type] [new name]

    typedef int feet;
    feet distance1 = 5;
    int distance2 = 5;

    cout << distance1 << " | ";
    cout << sizeof(distance1) << " | ";
    cout << sizeof(feet) << endl;
    cout << distance2 << " | ";
    cout << sizeof(distance2) << " | ";
    cout << sizeof(distance2) << endl;
    if (distance1 == distance2) {
        cout << "feet is same as int" << endl;
    } else {
        cout << "feet is not same as int" << endl;
    }

    // test enum
    cout << "************ test enum ************" << endl;

    enum color {red, green, blue} a, b, c;
    a = red;
    b = green;
    c = blue;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    enum color_1 {red_1, green_1=15, blue_1} a_1, b_1, c_1;
    a_1 = red_1;
    b_1 = green_1;
    c_1 = blue_1;
    cout << "a_1 = " << a_1 << endl;
    cout << "b_1 = " << b_1 << endl;
    cout << "c_1 = " << c_1 << endl;


}



