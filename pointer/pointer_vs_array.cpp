/**
 * C++ 指针 vs 数组
 *
 * 一个指向数组开头的指针，
 * 可以通过使用指针的算术运算或数组索引来访问数组。
 *
 * var 与 &var[0] 等价
 * var[0] 与 *var 等价
 */

#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    //
    int  var[MAX] = {10, 100, 200};
    int  *ptr;

    // 指针中的数组地址
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "var[" << i << "]的内存地址为 ";
        cout << ptr << endl;

        cout << "var[" << i << "] 的值为 ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
    return 0;
}
