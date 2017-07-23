#include "SingleLinkedList.h"
#include <iostream>

int main()
{
	//Testing List class and Node class from SingleLinkedList namespace
	SingleLinkedList::List<int> list;

	list.Insert(10);
	list.Insert(4);
	list.Insert(10);
	list.Insert(5);
	list.Insert(2);

	list.PrintList();

	SingleLinkedList::List<int> list2(list);
	std::cout << "The copied list looks following:\n";
	list2.PrintList();


	list.~List();

	list.PrintList();

	/*SingleLinkedList::List list2;

	list2.Insert(10);

	list2.PrintList();
	list2.Remove(10);
	list2.PrintList();*/

	return 0;
}
