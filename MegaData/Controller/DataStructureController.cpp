//
//  DataStructureController.cpp

//  MegaDatas
//
//  Created by Paladugu, Sai Neeraj on 5/1/17.
//  Copyright � 2017 paladugu, Sai Neeraj. All rights reserved.

//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNode.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.hpp"
#include "../Model/Queue.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/Stack.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/DoubleList.hpp"

using namespace std;

DataStructureController :: DataStructureController(){
    wordNode = Node<string>();
    numberNode = Node<int>();
}

void DataStructureController :: start(){
    testIntStack();
}

void DataStructureController:: testAdvancedFeatures(){
    int showDestructor = 0;
    
    if(showDestructor < 1){
        Array<string> words = Array<string>(5);
        cout << "There should be message about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "Int the last spot");
    Array<string> copiedWords = Array<string>(words);
    
    cout << "These should match: " << endl;
    cout << words.getFromIndex(0) << " Should be the same as " << copiedWords.getFromIndex(0) << endl;
}

void DataStructureController :: testIntArray(){
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index = 0; index < 3; index++){
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}

void DataStructureController:: testList(){
    List<string> taco;
    taco.addFront("Welcome to disneyland");
    taco.addEnd("The end is nigh.");
    taco.addAtIndex(1, "This is the 2nd (3rd) pos");
    taco.addEnd("Conman");
    
    cout << "Contains \"Conman\"? " << taco.contains("Conman") << endl << endl;
    
    for(int index = 0; index < taco.getSize(); index++){
        cout << taco.getFromIndex(index) << " is at index: " << index << endl;
    }
    
    taco.remove(3);
    
    cout << "Size: " << taco.getSize() << endl << endl;
    cout << "Contains \"Conman\"? " << taco.contains("Conman") << endl << endl;
}

void DataStructureController:: testNodes(){
    cout << "The contentes of Node<stinrg>" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}

void DataStructureController :: testListTiming()
{
    DoubleList<int> timingList;
    Timer totalTimer;
    totalTimer.startTimer();
    long slowTime [1000];
    long fastTime [1000];
    double averageSlow = 0.00, averageFast = 0.00;
    Timer doubleTimer;
    
    for(int index = 0; index < 1000; index++)
    {
        
        int randomIndex = rand() % 10000;
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        
        doubleTimer.startTimer();
        timingList.getFromIndexFast(randomIndex);
        doubleTimer.stopTimer();
        fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        averageSlow += slowTime[index];
        averageFast += fastTime[index];
        
        
    }
    
    averageSlow += averageSlow/1000.00;
    averageFast += averageFast/1000.00;
    
    cout << "When you do it in one diretion searching you get an average of: "  << averageSlow<< endl;
    cout << "When you do the BiDirectional way you get: " << averageFast << endl;
}

void DataStructureController:: testIntStack(){
    Stack<int> numberStack;
    
    numberStack.push(811);
    numberStack.add(2315);
    
    cout << "Size of Stack: " << numberStack.getSize() << endl;
    
    numberStack.push(00);
    numberStack.push(5555);
    numberStack.push(9898);
    
    cout << "Size of Stack: " << numberStack.getSize() << endl;
    
    int testValue = numberStack.pop();
    cout << "Test value is " << testValue << " and should be 9898 " << endl;
    
    int otherTest = numberStack.remove(3);
    cout << "Other test value is " << otherTest << " and should be 5555 " << endl;
    
    cout << "Size of Stack: " << numberStack.getSize() << endl;
    
    cout << endl;
    
}

void DataStructureController:: testFoodQueue(){
    Queue<FoodItem> tastyFood;
    
    FoodItem chickenTaco("Chicken taco with lettuce");
    
    tastyFood.enqueue(chickenTaco);
    FoodItem boring;
    tastyFood.add(boring);
    
    FoodItem removed = tastyFood.dequeue();
    cout << "The Item remoed from the queue was: " << removed.getFoodName() << " and should be: " << endl;
}


void DataStructureController:: testQueue(){
    
}

void DataStructureController:: testDoubleList(){
    
}

void DataStructureController:: testCircularList(){
    
}

