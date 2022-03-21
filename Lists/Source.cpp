#include<iostream>

#include"Lists.h"

#define LOG(x) std::cout<<x<<std::endl;


int main(void) {
	
	
	List<int> list;
	list.push(100);
	list.push(99);
	list.push(95);
	list.push(97);
	list.printList();
	LOG(list[4]);
	list.pop(4);

	// now added << operator overload with [] operator overload
	// need to add an insert function, an extened function and sublist function


	//Q:- Should I remove the printList function?

}