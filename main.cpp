/**
@file main.cpp
*/


/*! \mainpage Lab Book 3
 *
 * Implementation of a Double Linked List
 */

// Define and includes to show memory leak report
#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  
#include <iostream>
#include "doubleLinkedList.h"
#include "DoubleLinkedListNode.h"

using namespace std;

int main() /** Entry point for the application */
{
	doubleLinkedList<string> meListo;

	meListo.pushTop("With");
	meListo.pushTop("Be");
	meListo.pushTop("Force");
	meListo.pushBot("You!");
	meListo.pushTop("The");
	meListo.pushTop("May");
	


	cout << meListo.popTop() << endl;
	cout << meListo.popTop() << endl;
	cout << meListo.popTop() << endl;
	cout << meListo.popTop() << endl;
	cout << meListo.popTop() << endl;
	cout << meListo.popBot() << endl;

	_CrtDumpMemoryLeaks(); // Look in the output window for a report
	system("pause");
	return 0;
}
