#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//��ά���鶨�巽ʽ
int main()
{
    //��ʽ1  
	//�������� ������ [����][����]
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	// arr[1][1] = 5; //�������6�����ݣ�ʣ�µĲ�����0��䣬����䷽ʽ��ʲô��
	// arr[1][2] = 6;

    for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
    cout<<arr[3][4]<<endl;//����û�г�ʼ��ֵ��Ԫ��Ҳ���������������Ľ����ʲô���ڴ��ַ��

    //��ʽ2   �ɶ���ǿ
	// �������� ������[����][����] = { {����1������2 } ��{����3������4 } };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

    //��ʽ3
	//�������� ������[����][����] = { ����1������2 ,����3������4  };
	int arr3[2][3] = { 1,2,3,4,5,6 }; 

    //��ʽ4 
	//�������� ������[][����] = { ����1������2 ,����3������4  };
	int arr4[][3] = { 1,2,3,4,5,6,7 };//�����ʼ�������ݣ�����ʡ������,�����������������Զ�����
	 for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
    system("pause");
    return 0;
}