#include <iostream>
#include "clsMyStackArr.h"



int main()
{
	system("color 5f");
	clsMyStackArr<int> MyStack;
	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	cout << "Stack:\n";
	MyStack.Print();

	cout << "\nStack size: " << MyStack.Size() << endl;
	cout << "\nStack Top: " << MyStack.Top() << endl;
	cout << "\nStack Bottom: " << MyStack.Bottom() << endl;

	MyStack.pop();
	cout << "\n\nStack after pop():\n";
	MyStack.Print();

	//Extension #1
	cout << "\n\nItem(2): " << MyStack.GetItem(2) << endl;

	//Extension #2
	MyStack.Reverse();
	cout << "\n\nStack after Reverse():\n";
	MyStack.Print();

	//Extension #3
	MyStack.UpdateItem(2, 600);
	cout << "\n\nStack after updating item (20) to 600:\n";
	MyStack.Print();

	//Extension #4
	MyStack.InsertAfter(2, 800);
	cout << "\n\nStack after inserting 800 after item(2):\n";
	MyStack.Print();

	//Extension #5
	MyStack.InsertAtFront(1000);
	cout << "\n\nStack after inserting 1000 at front:\n";
	MyStack.Print();

	//Extension #6
	MyStack.InsertAtBack(2000);
	cout << "\n\nStack after inserting 2000 at back:\n";
	MyStack.Print();

	//Extension #7
	MyStack.Clear();
	cout << "\n\nStack after Cleaning:\n";
	MyStack.Print();

	system("pause > 0");
}
