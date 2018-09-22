/**
 * C++ 指针的算术运算
 *
 * 指针是一个用数值表示的地址。
 * 可以对指针进行四种算术运算：++、--、+、-。
 *
 * 假设 ptr 是一个指向地址 1000 的整型指针，是一个 32 位的整数
 *
 * ptr++
 *
 * 上述的运算之后，ptr 将指向位置 1004，
 * 因为 ptr 每增加一次，
 * 它都将指向下一个整数位置，
 * 即当前位置往后移 4 个字节。
 *
 * 如果 ptr 指向一个地址为 1000 的字符，
 * 上面的运算会导致指针指向位置 1001，
 * 因为下一个字符位置是在 1001。
 */

#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
    // 声明数组后，var中存储了第一个元素的地址
    int  var[MAX] = {10, 100, 200};
    int  *ptr;

    // 指针中的数组地址
    ptr = var;      // ptr = &var[0];
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }

    // 指针中最后一个元素的地址
    ptr = &var[MAX-1];
    for (int i = MAX; i > 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr--;
    }

    return 0;
}
