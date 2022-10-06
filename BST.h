/*
Author: Jose Garcia
Assignment Number: Lab Assignment 4
File Name: BST.h
Course/Section: CS 2123 Section 01T
Date: August 3 2020
Instructor: Dr. Ku
*/

#ifndef _BST_H
#define _BST_H

//structure for the tree nodes
typedef struct nodeT{
    struct nodeT *pLeft, *pRight;
    int value;
}nodeT;

//prototypes
nodeT* insert(nodeT *p, int x);
nodeT* newNodeT(int x);
void printTree(nodeT *p, int space);
void report(nodeT *p);
nodeT* deleteNode(nodeT *pRoot, int value);
nodeT *minValueNode(nodeT *p);
nodeT* build(int left, int mid, int right);

/* Lab4 */
void printInOrder(nodeT *p);
void printPreOrder(nodeT *p);
void printPostOrder(nodeT *p);
int getHeight(nodeT *p);
int getNumberOfNodes(nodeT *p);
int getNumberOfLeaves(nodeT *p);
int contains(nodeT* p, int key);

/* BONUS */
void treeToSortedArray(nodeT* p, int sortedArray[], int i);
nodeT* arrayToBalancedTree(int sortedArray[], int start, int end);

#endif