/* 	Binary Search Tree Interface 	*/
/*	*	*	*	*	*	*	*	*	*	*	*	*
  *	This builds a traditional binary search tree, but one additional value is included		*
  *	in the node structure... count because this tree is built from reading in values		*
  *	and we want to be able to keeep track of how many of each value is encounterd.		*
  *												*
  *	Is not a self centering BST:	the first node remains the root node			*
  *												*
  *	Original Purpose of this is to help complete the Hacker Ranker challenge:			*	
  *	"Game of Thrones I" where the goal is to determine if a string read from 			*	
  *	STDIN can be rearranged to be turned into a palindrome.				*
  *												*
  *	@author: 	Brian P. Steffes (brian@steffes.io)					*
  *	@date:		January 23, 2014							
  *	*	*	*	*	*	*	*	*	*	*	*	*/


#ifndef _BINARY_TREE_LIB_H_
#define _BINARY_TREE_LIB_H_

/* number of letters in the alphabet: interface built for letter valued nodes */
#define MAX_NODE_COUNT 26

/* struct bstnode:	The basic node structure in a binary search tree*/ 
typedef struct bstnode {
	int 	value;		//store character as an integer explicitely
	int 	count;
	struct 	node* leftChild;
	struct 	node* rightChild;
} tree_node;


/*FUNCTION PROTOYPES*/

tree_node* creatNode(int value);
void insertNode();
void printNode();
void printInOrder();
void printPreOrder();
int deleteTree();
bool hasNode();

#endif