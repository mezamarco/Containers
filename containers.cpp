#include <iostream>
#include <queue>
#include <stack>
#include <set>
#include <vector>


//Function prototypes
int makeMeYoung(int* age);

void actYourAge(int& age);


//Lets do an example of a Recursive function.
int getFactorial(int number);


int main(){


        //Pointer Review
	char ch = 'M';

	char* favChar = &ch;


	std::cout << "Address if the pointer: " << favChar << std::endl;
	// lets derefence the pointer
	std::cout << "Deference the pointer and we get back the value: " << *favChar << std::endl;

	std::cout << "The memory size of the character pointer is: " << sizeof(favChar) << std::endl;
        
	//To get the ASCII value of pointer, Dereference the pointer then cast it with (int)
	std::cout << "The ASCII value of character: M  is:  " << int(*favChar) << std::endl;


	//Using a pointer to traverse an array
	//Create our array
	int numArr[4] = {6,7,8,9};
	//Create our pointer
	int* theArrayPointer = numArr;

	//Now we can use theArrayPointer to traverse the array
	

	std::cout << "Address: " << theArrayPointer << " The value is: " << *theArrayPointer << std::endl;
	std::cout << "Increment theArrayPointer" << std::endl;
	++theArrayPointer;
	std::cout << "Address: " << theArrayPointer << " The value is: " << *theArrayPointer << std::endl;
	std::cout << "Increment theArrayPointer" << std::endl;
	++theArrayPointer;
	std::cout << "Address: " << theArrayPointer << " The value is: " << *theArrayPointer << std::endl;
	std::cout << "Increment theArrayPointer" << std::endl;
	++theArrayPointer;
	std::cout << "Address: " << theArrayPointer << " The value is: " << *theArrayPointer << std::endl;
	std::cout << "Increment theArrayPointer" << std::endl;
	//By moving our pointer out of the array range, we have no issues but we will just get garbage.	
	
	//NOTE: an array name is just pointer to an array
	//Therefore, we can simply use the name of the array, numArr 
	//std::cout << "Address: " << numbArr << " The value is: " << *numArr << std::endl;
	//This will print the first memory address and the first value.
	


	//Lets talk about functions
	//If you pass by reference or by a pointer the given variable will change its value as well
	//When passing regularly then a copy of this variable is made and it has a local scope
        int age = 100;
	makeMeYoung(&age);
	//we are passing the variable age as reference and therefore the function will change its value
	std::cout << "Your age is now:" << age  << std::endl;
	actYourAge(age);
	std::cout << "Your age is now:" << age  << std::endl;


	//Abstract Data types (ADT)  Equivalent to saying Containers
	
	
	
	
	/*Queue: "Waiting in line in the grocery store"
	* A Queue is considered a "First In First Out" (FIFO) data type
	* A QUeue has the following functions:
	* push(element): 	Add element to the back of the Queue
	* front():		Look at the element at the front of the queue
	* pop():		Remove the element at the front of the queue
	*
 	* 	#include <queue>
	*/

        std::queue<int> myQueue;
	
	
        myQueue.push(22);
        myQueue.push(44);
        myQueue.push(11);
        myQueue.push(3);
        myQueue.push(66);

	//Lets print out the values of the queue
	int queueSize = myQueue.size();  
	std::cout << "\n\nThe size of the Queue: " << queueSize << std::endl;
	std::cout << "Queue: ";
	int i=1;
	while(!myQueue.empty())
	{
		if(i !=  queueSize){
		  std::cout <<myQueue.front()<< " , "; 
		  myQueue.pop();
		  ++i;
		} else {
		  std::cout << myQueue.front() << std::endl;
		  myQueue.pop();
		}
	}




	
	/*Stack: "Washing dishes"
	 * A Stack is considered a "Last In Last Out" (LILO) data type
	 * A Stack has the following functions: 
	 * push(element): 	Add the following element into the top of the stack  	
	 * top():		Look at the element that is in the top of the stack
	 * pop():		Remove the element at the top of the stack
	 *
	 *	 #include <stack>
	 */
   	
	std::stack<int> myStack;


	myStack.push(33);
	myStack.push(78);
	myStack.push(99);
	myStack.push(22);
	myStack.push(4);

	//Lets print out the values of my stack
	int stackSize = myStack.size();
	std::cout << "\nTHe size of the Stack: " << stackSize << std::endl;
	std::cout << "Stack: ";

	i = 1;
	while(!myStack.empty())
	{
		if(i != stackSize){
		  std::cout << myStack.top() << " , ";
		  ++i;
		  myStack.pop();
		} else {
		  std::cout << myStack.top() << "\n" << std::endl;

		  myStack.pop();
		}
	}



	/*Set: It has two properties:  1: Ascending Order  2: No repeated elements
	*  A Set has the following functions:
	*  insert(element):	 Add element to the set
	*
	*   	#include <set>
	*   	A set is simply a balance binary tree structure   o(log n)
	*
	*/

	std::set<int> mySet;
     

	mySet.insert(33);	
	mySet.insert(32);	
	mySet.insert(66);	
	mySet.insert(77);	
	mySet.insert(2);	
	mySet.insert(1023);

	//Lets print out the values of the set
	int setSize = mySet.size();
        std::cout << "The size of the Set: " << setSize << std::endl;	
        std::cout << "Set: ";
        
        //Use an iterator to traverse the set
	std::set<int>::iterator itr = mySet.begin();
	std::set<int>::iterator itrEnd = mySet.end();

        int theCounter = 0;	
	while(itr != itrEnd){
		if(theCounter != setSize-1){
		  std::cout << *itr << " , ";
		  ++itr;
		  ++theCounter;
		}
		else{
	          std::cout << *itr << "\n" <<std::endl;
		  ++itr;
		}
	}


	

	/*Vector
	 * A Vector has the following functions:
	 * push_back(element):    	Add element at the end of the vector
	 * pop_back():			Delete element at the end of the vector
	 * back():			Take a look at the last element of the vector
	 * front(): 			Take a look at the front element of the vector
	 *
	 * 	#include <vector>
	 */

	std::vector<int> myVector; 
	

	myVector.push_back(22);
	myVector.push_back(4);
	myVector.push_back(65);
	myVector.push_back(77);
	myVector.push_back(22);

	int vectorSize = myVector.size();
	std::cout <<  "The size of the Vector: " << vectorSize << std::endl;
     	std::cout << "Vector: ";


	std::vector<int>::iterator iter = myVector.begin();
	std::vector<int>::iterator iterEnd = myVector.end();


	int vectCounter = 0;

	while(iter != iterEnd)
	{
		if(vectCounter != vectorSize - 1){
		  std::cout << *iter << " , ";
	  	  ++iter;
		  ++vectCounter;
		}
		else{
			std::cout << *iter<< "\n" << std::endl;
			++iter;
		}
	
	}
	


	/*Pair 
	 */

	std::pair<int, bool> myPair;

	myPair.first = 22;
	myPair.second = true;

	std::cout << "My pair contairs the following: (" << myPair.first << " , " << myPair.second << ")"<< std::endl;
	std::cout << std::endl;


        /*Set of Pairs
	 * A Set of pairs is automatically arranged from smallest to largest
	 * Depending on what is in the position of first.
	 *
	 *
	 * 	#include <set>
	 * 	#include <iterator>
         */
	  
	 std::set< std::pair<int,int> > mySetPair;

	 mySetPair.insert( std::make_pair(22,45));
	 mySetPair.insert( std::make_pair(24,67));
	 mySetPair.insert( std::make_pair(78,5));
	 mySetPair.insert( std::make_pair(3,56));
	 mySetPair.insert( std::make_pair(87,45));
	 mySetPair.insert( std::make_pair(22,75));
	 mySetPair.insert( std::make_pair(22,45)); //This repeated element will not be added to the set

	 //Use an iterator to print out all the pairs

	 std::set<std::pair<int,int>>::iterator myIterator = mySetPair.begin();
	 std::set<std::pair<int,int>>::iterator myIteratorEnd = mySetPair.end();

	 std::cout << "The size of the set of pairs: " << mySetPair.size() << std::endl;
	 std::cout << "Set of Pairs:" << std::endl;
	 int k = 0;
	 while(myIterator != myIteratorEnd)
	 {
	 	std::cout << "Element " <<k <<": " <<  myIterator->first << " , " << myIterator->second << std::endl;
		++myIterator;
		++k;
	 }



	 //Call the recursive function
	 std::cout<<"The factorial of 6 = " << getFactorial(6) << "\n\n\n" << std::endl;



}

int makeMeYoung(int* age){

 //We are passing by reference and therefore any changes inside the function will change for 
 std::cout << "I use to be: " << *age << std::endl;
 *age = 21;
 return 1;
}

void actYourAge(int& age){
  age = 31;
}


int getFactorial(int number){
  
  int sum;
  
  std::cout<< "NUmber: "<< number <<std::endl;
  
  if(number == 1)
  {
	  sum = 1;
  }
  else
  {
    sum = getFactorial(number -1 ) * number;
  }

  return sum;
}
