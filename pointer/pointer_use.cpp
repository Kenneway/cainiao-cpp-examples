/**
 * C++ 中使用指针
 *
 * 指针是一个变量，其值为另一个变量的地址，
 * 即，内存位置的直接地址。
 *
 * 指针变量声明的一般形式为：
 *
 * type *var-name;
 *
 * 在这里，type 是指针的基类型，
 * 它必须是一个有效的 C++ 数据类型，
 * var-name 是指针变量的名称。
 *
 * 如:
 * int    *ip;
 * double *dp;
 * float  *fp;
 * char   *ch;
 *
 * 所有指针的值的实际数据类型，
 * 不管是整型、浮点型、字符型，还是其他的数据类型，
 * 都是一样的，都是一个代表内存地址的长的十六进制数。
 * 不同数据类型的指针之间唯一的不同是，
 * 指针所指向的变量或常量的数据类型不同。
 */

#include <iostream>

using namespace std;

int main ()
{
    int  var = 20;   // 实际变量的声明
    int  *ip;        // 指针变量的声明

    ip = &var;       // 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}


