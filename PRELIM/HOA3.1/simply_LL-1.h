#ifndef SIMPLY_LL_H
#define SIMPLY_LL_H

template <typename T>
class SimplyList{
	public: 
		T data;
		SimplyList<T> *next = nullptr;
};

template <typename T>
void listTraversal(SimplyList<T>* head){
	if(head == nullptr){
		std::cout<<"List is empty"<<std::endl;
		return;
	}
	
	while(head != nullptr){
		std::cout<<head->data;
		if(head->next != nullptr){
			std::cout<<"->";
		}
		head = head->next;
	}
	std::cout<<std::endl;
}

template <typename T>
void sllinsertHead(T newData, SimplyList<T>** currentHead){
	SimplyList<T>* newNode = new SimplyList<T>; //allocate memory for the new node
	newNode->data = newData; //put our data into the new noe
	newNode->next = *currentHead;
	// reset the hea to point to the new node
	*currentHead = newNode;
}

template <typename T>
void sllGeneralInsert(T newData, SimplyList<T>* prevNode){
	if(prevNode == nullptr){
		std::cout<<"Previous node cannot be null"<<std::endl;
		return;
	}
	// allocate new noe
	SimplyList<T>* newNode = new SimplyList<T>;
	//Store data in the new node;
	newNode->data = newData;
	//point new node to the node previous node was pointing to
	newNode->next = prevNode->next;
	// point previos node to the new node
	prevNode->next = newNode;
}

template <typename T>
void sllinsertEnd(T newData, SimplyList<T>** head){
	//alocate new node
	SimplyList<T>* newNode = new SimplyList<T>;
	// dereference to the head node
	SimplyList<T>* currentNode = *head;
	// store data in the new node
	newNode->data = newData;
	//point next of nw node to null
	newNode->next = nullptr;
	//traversing the list
	while(currentNode->next != nullptr){
		currentNode = currentNode->next;

	}
	//point the next of the curent node to the new node
	currentNode->next = newNode;
} 

template <typename T>
void sllDeleteNode(T findData, SimplyList<T>** head){
	//check if there is no list to be deleted
	if(*head == nullptr) return;

	SimplyList<T>* currNode = *head;
	SimplyList<T>* prevNode = nullptr;

	//searching loop
	while(currNode != nullptr && currNode->data != findData){
		prevNode = currNode;
		currNode = currNode->next;

	}

	// if data was not found
	if(currNode == nullptr) return;
	//what if the node to be deleted is the head node
	if(prevNode == nullptr){
		*head = currNode->next;

	}else{
		prevNode->next = currNode->next;
	}
	//how do we dlete the node
	delete currNode;
}


template <typename T>
void sllDeleteList(SimplyList<T>** head){
	SimplyList<T>* current = *head;

	while(current != nullptr){
		SimplyList<T>* temp = current;
		current = current->next;
		delete temp;
	}
	*head = nullptr;
}


#endif
