#include <iostream>
#include "0-join_str.h"
using namespace std;

int main() {

    string h = "Hello";
    string w = "World";

    string hw = join(h, w);
    cout << hw << endl;

    return 0;
}