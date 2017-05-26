//
//  IntNode.hpp

//  ArrayProject
//
//  Created by Paladugu, Sai Neeraj on 5/1/17.
//  Copyright � 2017 paladugu, Sai Neeraj. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * nextPointer;
    
public:
    //init
    IntNode();
    IntNode(int value);
    /*
     Creates an IntNode with a specified value and next node pointer
     */
    IntNode(int value, IntNode * nextNode);
   
    //Methods
    int getNodeData();
    IntNode * getNodePointer();
    
    void setNodeData(int value);
    void setNodePointer(IntNode * next);
    
    
    
};

#endif /* IntNode_hpp */
