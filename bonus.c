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

int main(int argc, char** argv)
{
  int levels;
  int nodeCount;
  
  printf("This porgram can build a balanced tree of variable levels.\n");
  printf("What level BST would you like to make?: ");
  scanf("%d", &levels);
  
  nodeCount = pow(2, levels);
  printf("***BUILDING LEVEL %d BST***\n", nodeCount);
  
  //make regular tree
  nodeT* root = NULL;
  int data = 1;
  
  int* sortedArray = (int*)malloc(nodeCount * sizeof(int));
  int i;
  
  for(i = 0; i < nodeCount; i++)
  {
    root = insert(root, data);
    data = data + 1;
  }
  
  //tree to array
  i = 0;
  treeToSortedArray(root, sortedArray, i);
  
  //array to balanced tree
  root = arrayToBalancedTree(sortedArray, 0, nodeCount - 1);
  
  printTree(root, 0);
  printf("The height is %d\n", getHeight(root));
  printf("The number of nodes is %d\n", getNumberOfNodes(root));
  printf("The number of leaves is %d\n", getNumberOfLeaves(root));
  
  printf("In Order: \n");
  printInOrder(root);
  printf("\n");
  printf("Pre Order: \n");
  printPreOrder(root);
  printf("\n");
  printf("Post Order: \n");
  printPostOrder(root);
  printf("\n");
  
  return 0;
}