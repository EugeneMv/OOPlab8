
#include "stdafx.h"
#include "ListFunk.h"
#include <iostream>

//инициализация вырубит функции assert
#define NDEBUG
#include <cassert>

using namespace std;

void main(){
	setlocale (LC_CTYPE, "Russian");
try
	{
		/// ошибка отрицательного числа 

	/*	Towar q;
		q.setCost(-4);
		cout << q.getCost();*/

		/// ошибка вывода пустого списка


	/*	List<int> Lst;
		Lst.show();*/

		/// ноль не принимаем

		/*List<float> lst2(0);*/

		/// список ограничен 3-элементами

		/*List<int> ls;
		ls.add(1); ls.add(2); ls.add(3); ls.add(4); */

		/// дабл элементы не принимаем

		/*List<double> eee(4);*/

		///

		int x = 4;

		assert(x == 5);

		cout << "1" << endl;
}
catch(wrongprice_ex& ex)
{
	cout<<"ошибка: " <<ex.what()<<endl;
	cout<< "значение: "<< ex.getPrice() << endl;
}
catch(Type_error_ex& ex)
{
	cout << "ошибка: " << ex.what() << endl;
	cout << "тип: " << ex.getType() << endl;
}
catch(emptyList_ex& ex)
{
	cout << "ошибка: " << ex.what() << endl;
}
catch(null_pointer_ex& ex)
{
	cout << "ошибка: " << ex.what() << endl;
	cout << "класс: " << ex.getType() << endl;
}
catch(listFull_ex& ex)
{
	cout << "ошибка: " << ex.what() << endl;
	cout << "тип: " << ex.getType() << endl;
}

// любое неопределённое прерывание throw приведет сюда
catch (...)
	{
		cerr << "иная ошибка!" << endl;
	}
}