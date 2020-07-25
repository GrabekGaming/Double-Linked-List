#include "DoubleLinkedListNode.h"
//#include "DoubleLinkedList.h"


DoubleLinkedListNode::DoubleLinkedListNode(string newData, shared_ptr<DoubleLinkedListNode>& newNext, shared_ptr<DoubleLinkedListNode>& newPrev)
{
	data = newData;
	next = newNext;
	prev = newPrev;
}

string DoubleLinkedListNode::getData()
{
	return data;
}

shared_ptr<DoubleLinkedListNode> DoubleLinkedListNode::getNext()
{
	return next;
}

shared_ptr<DoubleLinkedListNode> DoubleLinkedListNode::getPrev()
{
	return prev;
}

void DoubleLinkedListNode::setNextNode(shared_ptr<DoubleLinkedListNode> newNext)
{	
}

void DoubleLinkedListNode::setPrevNode(shared_ptr<DoubleLinkedListNode> newPrev)
{	
}

void DoubleLinkedListNode::printNode()
{
}
