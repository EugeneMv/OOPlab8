
#include "stdafx.h"
#include "ListFunk.h"
#include <iostream>

//������������� ������� ������� assert
#define NDEBUG
#include <cassert>

using namespace std;

void main(){
	setlocale (LC_CTYPE, "Russian");
try
	{
		/// ������ �������������� ����� 

	/*	Towar q;
		q.setCost(-4);
		cout << q.getCost();*/

		/// ������ ������ ������� ������


	/*	List<int> Lst;
		Lst.show();*/

		/// ���� �� ���������

		/*List<float> lst2(0);*/

		/// ������ ��������� 3-����������

		/*List<int> ls;
		ls.add(1); ls.add(2); ls.add(3); ls.add(4); */

		/// ���� �������� �� ���������

		/*List<double> eee(4);*/

		///

		int x = 4;

		assert(x == 5);

		cout << "1" << endl;
}
catch(wrongprice_ex& ex)
{
	cout<<"������: " <<ex.what()<<endl;
	cout<< "��������: "<< ex.getPrice() << endl;
}
catch(Type_error_ex& ex)
{
	cout << "������: " << ex.what() << endl;
	cout << "���: " << ex.getType() << endl;
}
catch(emptyList_ex& ex)
{
	cout << "������: " << ex.what() << endl;
}
catch(null_pointer_ex& ex)
{
	cout << "������: " << ex.what() << endl;
	cout << "�����: " << ex.getType() << endl;
}
catch(listFull_ex& ex)
{
	cout << "������: " << ex.what() << endl;
	cout << "���: " << ex.getType() << endl;
}

// ����� ������������� ���������� throw �������� ����
catch (...)
	{
		cerr << "���� ������!" << endl;
	}
}