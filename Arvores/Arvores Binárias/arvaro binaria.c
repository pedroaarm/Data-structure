
#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
  int num;
  struct tree* sad;
  struct tree* sae;
} Tree;


void insertElement(Tree** head, int element){
	
	if(*head == NULL){
	printf("head is null, insert into head\n");
	*head = (Tree*)malloc(sizeof(Tree));
	(*head)->num = element;
	(*head)->sad = NULL;
	(*head)->sae = NULL;
	}else{
	 if(element > (*head)->num){
		insertElement(&(*head)->sad, element);
	}else{
		insertElement(&(*head)->sae, element);
	}
}
	
}

Tree* seacrhElement(Tree* head, int element){
	
	if (head == NULL){
		return NULL;
	}else{
		if(head->num == element){
			return head;
		}else{
			if(element > head->num){
				return seacrhElement(head->sad, element);
			}else{
				return seacrhElement(head->sae, element);
			} 
		}
		
	}
	
}

void findElement(Tree* head, int element){
	
	Tree* elementExist = seacrhElement(head, element);
	if(elementExist == NULL){
		printf("Elemento não existe\n");
		
	}else{
		printf("Elemento existe\n");
	}
	
}


void printTree(Tree* head){
	
	if(head == NULL){
		return;
	}else{
		
		printTree(head->sae);
		printTree(head->sad);
		printf("element = %i\n", head->num);
	}
}



int main(int argc, char **argv)
{
    Tree* head = NULL;
    
    
    insertElement(&head, 26);
    insertElement(&head, 18);
    insertElement(&head, 32);
    insertElement(&head, 1);
    insertElement(&head, 99);
    insertElement(&head, 14);
    insertElement(&head, 91);
    insertElement(&head, 12);
    insertElement(&head, 3);
    
    
    //printTree(head);
    
    findElement(head,3);
    findElement(head,33);
    findElement(head,99);
    
	return 0;
}

