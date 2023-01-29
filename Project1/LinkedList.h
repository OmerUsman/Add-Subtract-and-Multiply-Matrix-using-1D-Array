#pragma once
#include<iostream>
using namespace std;
template <class T>
class Node
{
public:
	T data;
	Node<T>* next;
};
template <class T>
class LinkedList
{
protected:
	
	Node<T>* head;
	Node<T>* tail;
public:
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	virtual void insertSorted(T) = 0;
	virtual void insertAtTail(T) = 0;
	virtual void insertAtHead(T) = 0;
	virtual T deleteFromHead() = 0;
	virtual T deleteFromTail() = 0;
	virtual bool deleteValue(T) = 0;
	virtual bool searchValue(T) = 0;
	virtual void display() = 0;
	//virtual void deleteDuplicates() = 0; //deletes all duplicate values
	//virtual bool isPalindrome() = 0;
	//virtual void destoryList() = 0; //deletes all values in LL
};
