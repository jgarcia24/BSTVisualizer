/*
Author: Jose Garcia
Assignment Number: Lab Assignment 4
File Name: BST.h
Course/Section: CS 2123 Section 01T
Date: August 3 2020
Instructor: Dr. Ku
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "BST.h"

int main(int argc, char** argv) {
    nodeT *pRoot = NULL;        //root
    int data;                   //holds the int data
    int key; //for contains function
    int truth_value;
   
    //Insertion of new items, reports when done
    printf("Items to insert (-999 to stop): ");
    scanf("%d", &data);
        
    while(data != -999){
        pRoot = insert(pRoot, data);
        
        printf("The height is %d\n", getHeight(pRoot));
        printf("The number of nodes is %d\n", getNumberOfNodes(pRoot));
        printf("The number of leaves is %d\n", getNumberOfLeaves(pRoot));
        
        printf("Items to insert (-999 to stop): ");
        scanf("%d", &data);
        
    }
    
    //If tree is empty
    if(pRoot == NULL)
    {
        printf("BST is empty.\n");
        printf("The height is %d\n", getHeight(pRoot));
        printf("The number of nodes is %d.\n", getNumberOfNodes(pRoot));
        printf("The number of leaves is %d.\n", getNumberOfLeaves(pRoot));
        
        return 0;
    }
    
    report(pRoot);
    
    //contains functionality
    printf("Now testing contains() operation.\n");
    printf("Item to find (-999 to stop): ");
    scanf("%d", &key);
    
    while(key != -999)
    {
      truth_value = contains(pRoot, key);
      
      if(truth_value == 0)
      {
        printf("Found\n");
      }
      else
      {
        printf("Not found\n");
      }
      
      printf("Item to find (-999 to stop): ");
      scanf("%d", &key);
    }
    

    //deletion of items, reports after each deletion
    printf("Now testing deleteNode() operation.\n");
    printTree(pRoot, 0);
    printf("Items to delete (-999 to stop): ");
    scanf("%d", &data);
    
    while(data != -999){
        pRoot = deleteNode(pRoot, data);
        
        printTree(pRoot, 0);
        printf("The height is %d\n", getHeight(pRoot));
        printf("The number of nodes is %d\n", getNumberOfNodes(pRoot));
        printf("The number of leaves is %d\n", getNumberOfLeaves(pRoot));
        
        printf("Items to delete (-999 to stop): ");
        scanf("%d", &data);
    }
    
    report(pRoot);

    return 0;
}
