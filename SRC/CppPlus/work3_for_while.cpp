

#include <iostream>
using namespace std;

int main()
{
    int i;
    i + 6;  //valid but useless 表达式+分号=语句，反之不对
    for (i = 0 ; i < 5; i++){}
    cout << (i == 5) << endl;//1      // << 优先级高于表达式
    cout.setf(ios_base::boolalpha);   //C++ 设置标志显示true/false,而非1/0
    cout << (i < 5) << endl;//false

    return 0;
}