#pragma once

#include <iostream>
#include <stdexcept>


using namespace std;

class listFull_ex : public exception
{
private:
	char* type;
public:
	explicit listFull_ex(const char* what_,const char* typ) : exception(what_)
	{
		type = const_cast<char*>(typ);
	}

		char* getType()
		{
		return type;
		}
};

class wrongprice_ex : public invalid_argument
{
	float price;
public:
	wrongprice_ex(const char* what_, float price_ ) : invalid_argument(what_)
	{
		price = price_;
	};

	float getPrice()
	{
		return price;
	}
};

class Type_error_ex : public exception
{
private:
	char* type;
public:
	Type_error_ex(const char* what_,const char* typ) : exception(what_)
	{
		type = const_cast<char*>(typ);
	}

	char* getType()
	{
		return type;
	}
};

class emptyList_ex : public exception
{
public:
	emptyList_ex(const char* what_) : exception(what_)
	{};
};

class null_pointer_ex : public exception
{
		char* type;
public:
	null_pointer_ex(const char* what_,const char* typ) : exception(what_)
	{
		type = const_cast<char*>(typ);
	}

	char* getType()
	{
		return type;
	}
};

template <class T>
class List{
		static int kol;
		int listElKol;

	public:
		
	List<T>* head;
	T element;
	List<T>* next;

	List()
	{
		head = NULL;
	}

	List(T el){ 
		if(el != 0){
			if(strcmp(typeid(el).name(),"double") != 0 ){
		head = NULL; kol++;
		this->add(el); }
			else throw Type_error_ex("данный класс не принимает значение double",typeid(this).name());
		}
	else 
		 throw null_pointer_ex("данный список значение 0 не принимает", typeid(this).name());
	}

	void add(T v);
	void show();
	bool IsEmpty();

	int getKol(){ return kol; }
	void operator --();	 
	void operator +(List<T> &);
	bool operator ==(List<T> &);
};

// определение статик переменной;
template<class T> int List<T>::kol;

class Towar
{
float cost;
public:
	void setCost(float cost_){
		if(cost_ >= 0){
			this->cost = cost_;}
		else throw wrongprice_ex("цена не может быть отрицательной ", cost_); 
	};
	float getCost(){
		return this->cost;
	};
};
