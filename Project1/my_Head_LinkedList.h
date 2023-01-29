#pragma once
#include"LinkedList.h"
template <class T>
class my_Head_LinkedList :public LinkedList<T> {
public:
	void insertSorted(T a) {
		
		
		Node<T>* p=LinkedList<T>::head;
		Node<T>* q=nullptr;
				Node<T>* element =new Node<T>;
		element->data = a;
		element->next = nullptr;
		if (p == nullptr) {
			p = element;
		}
		else {
			while (p->next != nullptr && p->data < a) {
				p = p->next;
				q = p->next;
			}
			p->next = element;
			element->next = q;
		}
	}
	void insertAtTail(T a) {
		Node<T>* p = LinkedList<T>::head;
				Node<T>* element =new Node<T>;
		element->data = a;
		element->next = nullptr;
		if (p == nullptr) {
			p = element;
		}
		else {
			while (p->next != nullptr) {
				p = p->next;
			}
			p->next = element;
		}
	}
	 void insertAtHead(T a) {
		Node<T>* p = LinkedList<T>::head;//int *n = new int;
		Node<T>* element =new Node<T>;
		element->data = a;
		element->next = nullptr;
		if (p == nullptr) {
			LinkedList<T>::head = element;
		}
		else {
			element->next=p;
			LinkedList<T>::head = element;
		}
	}
	T deleteFromHead() {
		if (LinkedList<T>::head == nullptr) {
			cout << "Error";
			return -1;
		}
		else
		{
			Node<T>* p = LinkedList<T>::head;
			T a = LinkedList<T>::head->data;
			LinkedList<T>::head = LinkedList<T>::head->next;
			delete p;
			return a;
		}
	}
	T deleteFromTail() {
		Node<T>* p = LinkedList<T>::head;
		if (p == nullptr) {
			cout << "error";
		}
		else {
			while (p->next != nullptr) {
				p = p->next;
			}
			delete p;
		}
		return 1;
	}
	 bool deleteValue(T a) {
		 if (LinkedList<T>::head == nullptr) {
			 return 0;
		 }
		 else
		 {
			 Node<T>* p = LinkedList<T>::head;
			 while (p->next != nullptr)
			 {
				 if (p->next->data == a) {
					 p->next = p->next->next;
					 delete p->next;
					 break;
				 }
			 }
		 }

	}
	bool searchValue(T a) {
		 if (LinkedList<T>::head == nullptr) {
			 return 0;
		 }
		 else
		 {
			 Node<T>* p = LinkedList<T>::head;
			 while (p->next != nullptr)
			 {
				 if (p->data == a) {
					 return 1;
				 }
			 }
		 }
	}
	void display() {
		 
			  Node<T>* p = LinkedList<T>::head;
			  while (p != nullptr)
			  {
				  cout << p->data << ' ';
				  p = p->next;
			  }
			  cout << endl;
		  
	}
	//  void deleteDuplicates() {

	//  }//deletes all duplicate values
	//virtual bool isPalindrome() = 0;
	//virtual void destoryList() = 0; //deletes all values in LL
};