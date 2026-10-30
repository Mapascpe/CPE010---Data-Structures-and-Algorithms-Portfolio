#include <iostream>
#include "simply_LL.h"

int main(){
	//creating an empty list
	SimplyList<char>* head = new SimplyList<char>;
	SimplyList<char>* second = new SimplyList<char>;
	SimplyList<char>* third = new SimplyList<char>;
	SimplyList<char>* fourth = new SimplyList<char>;
	SimplyList<char>* fifth = new SimplyList<char>;
	SimplyList<char>* sixth = new SimplyList<char>;

	// assign the data
	head->data = 'C';
	head->next = second;
	
	second->data = 'P';
	second->next = third;
	
	third->data = 'E';
	third->next = fourth;
	
	fourth->data = '0';
	fourth->next = fifth;

	fifth->data = '1';
	fifth->next = sixth;

	sixth->data = '0';
	sixth->next = nullptr;


	std::cout<<"Original list"<<std::endl;
	listTraversal(head);
	std::cout<<std::endl;
	std::cout<<"inserting a new node at the head"<<std::endl;
	sllinsertHead('G', &head);
	listTraversal(head);
	std::cout<<"Inserting node at the third: "<<std::endl;
	sllGeneralInsert('E', head->next->next);
	listTraversal(head);

	std::cout<<"deleting a node"<<std::endl;
	sllDeleteNode('C', &head);
	listTraversal(head);

	std::cout<<"deleting a node"<<std::endl;
	sllDeleteNode('P', &head);
	listTraversal(head);

	std::cout<<"Final list"<<std::endl;
	listTraversal(head);


	std::cout<<"Deleting all the nodes: "<<std::endl;
	sllDeleteList(&head);
	listTraversal(head);

	return 0;
	
}
