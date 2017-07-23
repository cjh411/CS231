/*
 * List.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */

#include "List.h"


list::list(){
	size = 0;
	head = NULL;

}

list::list(int value){
	size = 1;
	head = new intNode(value);

}




void list::addItem(int val){
	node* iternode = head;
	if (iternode == NULL){
		head = new intNode(val);
	}else{
		while(iternode->next != NULL){


			iternode = iternode->next;
		}

		iternode->next = new intNode(val);
	}

}

void list::addItem(char val){
	node* iternode = head;
	if (iternode == NULL){
		head = new charNode(val);
	}else{
		while(iternode->next != NULL){


			iternode = iternode->next;
		}

		iternode->next = new charNode(val);
	}

}

void list::printList(){
	node* iternode = head;
	if (iternode == NULL){
		std::cout << "No list values to display";
	}else{
		while(iternode->next != NULL){

			iternode->getValue();
			std::cout<<"\n";
			iternode = iternode->next;
		}

		iternode->getValue();
	}
}



void Reverselist::ReverseprintList(node* nodein){
	node* iternode = nodein;
	if (iternode == NULL){
			std::cout << "No list values to display";
	}else {
		if(iternode->next != NULL){
			Reverselist::ReverseprintList(iternode->next);
		}
		iternode->getValue();
	}
}
