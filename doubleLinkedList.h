#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

/*! \class doubleLinkedList.h
	\brief A stack data structure using smart pointers
*/

#include <string>
#include <memory>

#include "DoubleLinkedListNode.h"

using namespace std;

template<class G>
class doubleLinkedList
{
private:

	unsigned int size; //!< Number of elements in the stack
	shared_ptr<DoubleLinkedListNode<G>> top; //!< Item at the top of the stack
	shared_ptr<DoubleLinkedListNode<G>> bot;//!< Item at the bottom of the stack
	shared_ptr<DoubleLinkedListNode<G>> current; //!< Current item in the stack
public:

	doubleLinkedList(); //!< Default constructor

	void pushTop(G newElement); //!< Push on to the stack
	void pushBot(G newElement);
	G popTop();//!< Pop an item off the stack
	G popBot();
};


template<class G>
doubleLinkedList<G>::doubleLinkedList()
{
	top = nullptr;
	bot = nullptr;
	size = 0;

}
template <class G>
void doubleLinkedList<G>::pushTop(G newElement) //!< Push on to the top of the stack
{
	shared_ptr<DoubleLinkedListNode<G>> tempptr(new DoubleLinkedListNode<G>(newElement));//!< Temporary pointer
	if (size == 0) 
	{
		top = tempptr; //!< tempptr needs to be at the top
		bot = tempptr; //!< temptr needs to be at the bot
	}
	else
	{
		tempptr->setNext(top);
		top->setPrev(tempptr); //!< adds a pointer to the "tempptr" node
		top = tempptr; //!< sets the top as temporary
	}

	size++;//!< Plus one to the size of the list
}

template <class G>
void doubleLinkedList<G>::pushBot(G newElement) //!< Push on to the bottom of the stack
{
	shared_ptr<DoubleLinkedListNode<G>> tempptr(new DoubleLinkedListNode<G>(newElement));//!< Temporary pointer
	if (size == 0) 
	{
		top = tempptr; //!< tempptr needs to be at the top
		bot = tempptr; //!< temptr needs to be at the bot
		
	}
	else
	{
		tempptr->setPrev(top); 
		bot->setNext(tempptr); //!< adds a next pointer to the tempptr 
		bot = tempptr; //!< sets the bot as temporary 

	}

	size++; //!< Plus one to the size of the list

}


template <class G>
G doubleLinkedList<G>::popTop()
{
	shared_ptr<DoubleLinkedListNode<G>> tempptr = top;
	if (size == 0) return (G)0;
	else {
		if (top == bot)
		{
			bot = NULL; //!< assign bot to null
			top = NULL; //!< assign top to null
			return tempptr->getData(); //!< rutruns tempptr data
		};
		top = top->getNext(); //!< Sets top forward by one
		if (top != NULL) top->setPrev(NULL); //!< checks if top = null if not tehn sets the previous one to null
		return tempptr->getData(); 
	}
}

template <class G>
G doubleLinkedList<G>::popBot() 
{
	shared_ptr<DoubleLinkedListNode<G>> tempptr = bot;
	if (size == 0) return (G)0;
	else 
	{
		if (bot == top) 
		{
			bot = NULL; //!< assign bot to null
			top = NULL; //!< assign top to null
			return tempptr->getData(); //!< returns temptr data
		};
		bot = bot->getPrev(); //!< Sets bot back by one
		if (bot != NULL) bot->setNext(NULL); //!< checks if bot = null if not then next will be null
		return tempptr->getData();

	}
}

#endif