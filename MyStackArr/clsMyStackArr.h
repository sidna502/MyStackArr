#pragma once
#include <iostream>
#include "D:\Prorgramming_device\programing\ProblemSolvingLevel5\MyQueueArr\MyQueueArr\clsMyQueueArr.h"

using namespace std;

template <class T >
class clsMyStackArr : public clsMyQueueArr <T>
{
	using clsMyQueueArr <T>::front;
	using clsMyQueueArr <T>::back;
public:
	void push(T Item)
	{
		clsMyQueueArr <T>::MyList.InsertAtBeginning(Item);
	}
	T Top()
	{
		return clsMyQueueArr<T>::front();
		//return front();
	}
	T Bottom()
	{
		return clsMyQueueArr<T>::back();
		//return back();
	}
};

