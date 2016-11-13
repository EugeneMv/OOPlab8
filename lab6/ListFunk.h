
#include "stdafx.h"
#include <iostream>
#include "List.h"

template<class T> void List<T>::add(T value){
	if(value != 0)
	{
	if(this->listElKol < 3)
	{
		if(listElKol <= 0)
			listElKol = 0;
		this->listElKol++;
	List* ls = new List;
	if(!head)
	{
		ls->element = value;
		this->head = ls;
	}
	else
	{
		List* last = new List;
		last->element = value;
		ls = this->head;
		while(ls->next != NULL){
			ls = ls->next;
		}
		ls->next = last;
	}
	}
	else
		throw listFull_ex("список заполнен ",typeid(this).name());}
	else 
		throw null_pointer_ex("элемент добавляемый в объект данного класса не может быть равен нулю ",typeid(this).name());
	}


template<class T> void List<T>::show(){
	List *lst = head;
	if(head){
	while(lst){
		std::cout << lst->element << " ";
		lst = lst->next;
	}
	}
	else throw emptyList_ex("попытка вывести пустой список List");
}

template<class T> bool List<T>::IsEmpty(){
	if(this->head)
		return false;
	else 
		return true;
}

template<class T> void List<T>::operator+ (List<T> &ls2){
	List* ls = head;
	while(ls->next != NULL)
	{
			ls = ls->next;
		}
		ls->next = ls2.head;
}

template<class T> void List<T>::operator--(){
	List* ls = head;
	head = head->next;
}

template<class T> bool List<T>::operator==(List<T> &l){
	bool b = true;
	List<T>* ls1 = head;
	List<T>* ls2 = l.head;
	while(ls1 != NULL && ls2 != NULL){
		if(ls1->element == ls2->element)
		{
			ls1 = ls1->next;
			ls2 = ls2->next;
		}
		else
		{
			b = false;
			break;
		}
	}
	return b;
}

template<typename T> T minElem(List<T> &ls){
T min;
List<T> *p = ls.head;
min = p->element;
while(p){
	if(p->element < min)
		min = p->element;
	p = p->next;
	}
return min;
}

template<typename T, typename T2> void addT(List<T> &x,T2 &y){
	x.add(y.getCost());
}