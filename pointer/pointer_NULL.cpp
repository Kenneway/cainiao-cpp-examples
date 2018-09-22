/**
 * C++ Null 指针
 *
 * 在变量声明的时候，如果没有确切的地址可以赋值，
 * 为指针变量赋一个 NULL 值是一个良好的编程习惯。
 * 赋为 NULL 值的指针被称为空指针。
 * NULL 指针是一个定义在标准库中的值为零的常量。
 */

#include <iostream>

using namespace std;

int main ()
{
    int  *ptr = NULL;

    cout << "ptr 的值是 " << ptr << endl;

    if (!ptr) {
        cout << "ptr 为空" << endl;
    } else {
        cout << "ptr 非空" << endl;
    }

    return 0;
}

/**
 * 如需检查一个空指针，您可以使用 if 语句，如下所示：
 *
 * if(ptr)     如果 ptr 非空，则完成
 * if(!ptr)    如果 ptr 为空，则完成
 */









