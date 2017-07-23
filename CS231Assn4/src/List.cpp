/*
 * List.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */

#include "List.h"


list::list(){
	size = 0;
	head = new node();

}

list::list(int value){
	size = 1;
	head = new node(value);

}

void list::addItem(int val){
	node* iternode = head;
	if (iternode->value == NULL){
		head->value = val;
	}else{
		while(iternode->next != NULL){


			iternode = iternode->next;
		}

		iternode->next = new node(val);
	}

}
int list::getLargestValue(){
	int max = 0;
	node* iternode = head;
	while(iternode->next != NULL){

		if(iternode->value > max){
			max = iternode->value;
		}
		iternode = iternode->next;
	}

	if(iternode->value > max){
		max = iternode->value;
	}

	return max;
}



