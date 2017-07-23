/*
 * Node.h
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */

#ifndef NODE_H_
#define NODE_H_
#include <stddef.h>
#include <iostream>


//class node{
//	public:
//		node* next;
//		node();
//		virtual void getValue() = 0;
//
//
//};

//template <class type>
//class nodetemp: public node{
//	public:
//		type value;
//		node* next;
//		nodetemp();
//		nodetemp(type);
//		virtual void getValue();
//
//
//};

template <class type>
class nodetemp{
	public:
		type value;
		nodetemp<type>* next;
		nodetemp();
		nodetemp(type);
		void getValue();


};

#endif /* NODE_H_ */
