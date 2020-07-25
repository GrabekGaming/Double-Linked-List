#ifndef DOUBLELINKEDLISTNODE_H
#define DOUBLELINKEDLISTNODE_H
/*! \class DoubleLinkedListNode.h
	\brief A double linked list data structure
*/

#include <string>
#include <memory>

using namespace std;

template<class G>
class DoubleLinkedListNode
{
private:

public:

	DoubleLinkedListNode(G newData); //!< Constructor
	~DoubleLinkedListNode(); //!< Destructor
	G getData(); //!< Get data from the node
	shared_ptr<DoubleLinkedListNode> getNext(); //!< Get the next pointer
	shared_ptr<DoubleLinkedListNode> getPrev(); //!< Get the previous pointer
	void setNext(shared_ptr<DoubleLinkedListNode> newNext); //!< Set next pointer
	void setPrev(shared_ptr<DoubleLinkedListNode> newPrev); //!< Set previous pointer
	void print();

	string data; //!< The element held in the node
	shared_ptr<DoubleLinkedListNode> next; //!< Next element in the stack
	shared_ptr<DoubleLinkedListNode> prev; //!< Previous element in the stack 
 }; 

template<class G>
DoubleLinkedListNode<G>::DoubleLinkedListNode(G newData)
{
	 data = newData;
	 next = nullptr;
	 prev = nullptr;
}

template<class G>
DoubleLinkedListNode<G>::~DoubleLinkedListNode()
{
}

template<class G>
G DoubleLinkedListNode<G>::getData()
{
	return data;
}

template<class G>
shared_ptr<DoubleLinkedListNode<G>> DoubleLinkedListNode<G>::getNext()
{
	return next;
}

template<class G>
shared_ptr<DoubleLinkedListNode<G>> DoubleLinkedListNode<G>::getPrev()
{
	return prev;
}

template<class G>
void DoubleLinkedListNode<G>::setNext(shared_ptr<DoubleLinkedListNode<G>> newNext)
{
	next = newNext;
}

template<class G>
void DoubleLinkedListNode<G>::setPrev(shared_ptr<DoubleLinkedListNode<G>> newPrev)
{
	prev = newPrev;
}

template<class G>
void DoubleLinkedListNode<G>::print()
{
}

#endif