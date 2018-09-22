/**
 * 指针的比较
 *
 * 指针可以用关系运算符进行比较，如 ==、< 和 >。
 * 如果 p1 和 p2 指向两个相关的变量，
 * 比如同一个数组中的不同元素，则可对 p1 和 p2 进行大小比较。
 */

#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    int  var[MAX] = {10, 100, 200};
    int  *ptr;

    // 指针中第一个元素的地址
    ptr = var;
    int i = 0;
    while ( ptr <= &var[MAX - 1] )
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 指向上一个位置
        ptr++;
        i++;
    }
    return 0;
}
