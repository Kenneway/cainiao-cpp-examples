/**
 * C++ 指针数组
 *
 * 下面是一个指向整数的指针数组的声明：
 *
 * int *ptr[MAX];
 *
 * 在这里，把 ptr 声明为一个数组，由 MAX 个整数指针组成。
 * ptr 中的每个元素，都是一个指向 int 值的指针。
 *
 * 每个指针可以指向存储任何对象的地址,
 * 也因此可以保存任何对象, 包括数组.
 */

#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    int  var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; // 赋值为整数的地址
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }
    return 0;
}

/**
 * 也可以用一个指向字符的指针数组来存储一个字符串列表
 */

//#include <iostream>
//
//using namespace std;
//const int MAX = 4;
//
//int main ()
//{
//    const char *names[MAX] = {
//            "Zara Ali",
//            "Hina Ali",
//            "Nuha Ali",
//            "Sara Ali",
//    };
//
//    for (int i = 0; i < MAX; i++)
//    {
//        cout << "Value of names[" << i << "] = ";
//        cout << names[i] << endl;
//    }
//    return 0;
//}

