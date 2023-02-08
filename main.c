//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node d,bf,*head ;
  typedef struct node Node;
  typedef Node* NodePtr;
    NodePtr p=(NodePtr) malloc (sizeof(Node)); //a
    head=p;
    p->value = c ;
      int i,n=4;
    for(i=0;i<n;i++){
      p->next=(NodePtr) malloc (sizeof(Node));
      p=p->next;
      p->value=c+i+1;
      p->next=NULL;
      }
  
    /*p->next=(NodePtr) malloc (sizeof(Node)); //b
    p->next->value=head->value+3;
    
    p->next->next=(NodePtr) malloc (sizeof(Node)); //d
    p->next->next->value=11;
    p->next->next->next=NULL;*/

  
    /*bf.value=2;
    head=&bf;
    bf.next=p;*/
    
    /*
   
    d.value=11;
    d.next=NULL;
    printf("%d\n", head->value);
    printf("%d\n", head->next->value ); //what value for 5
    printf("%d\n", head->next->next->value ); //what value for 8
    printf("%d\n", head->next->next->next->value ); //d=11
    */
  //d.value
  //a.next->next->value
  //head->next->next-?value
    
  

 
    

        

    //typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    //  Exercise III Use loop to print everything
        int j,m=4;
        for(i=0;i<n;i++){
            printf("%3d->", tmp->value);
          tmp=tmp->next;
          // What is missing???
        }
    printf("NULL\n");
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       tmp=head;
         while(tmp!=NULL){
            printf("%3d->", tmp->value);
           tmp=tmp->next;
           // What is missing???
        }
  printf("NULL\n");
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    
    return 0;
}
