#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//所谓值传递，就是函数调用时实参将数值传入给形参
//值传递时。如果形参发生变化，并不会影响实参

void swap(int num1 ,int num2)
{
    cout <<"交换前："<<endl;
    cout << "num1 = "  << num1 << endl;
	cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout <<"交换后："<<endl;
    cout << "num1 = "  << num1 << endl;
	cout << "num2 = " << num2 << endl;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    
    cout<<"main中的 a = "<< a <<endl;
    cout<<"main中的 b = "<< b <<endl;

    system("pause");
    return 0;
}