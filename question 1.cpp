//include library file
#include<iostream>
using namespace std;

class Node{
	public:
	//the data part of node
		int data;
	//the pointer part
		Node * next;
	//contructor for node to null
		Node(){
			next = NULL;
		}
};

class Linkedlist{
	public:
	//assigning the head and the tail
		Node * head;
		Node * tail;
		Linkedlist(){
			head=NULL;
			tail=NULL;
		}
	//to insert the node in the end
		void insrt(int no){
			
			Node * temp=new Node;
			temp->data=no;
			
			if(head==NULL){
				head=temp;
				tail=temp;
			}
			else{
				tail->next=temp;
				tail=temp;
			}
		}
		
		//inserting node at a point
		void insrtat(int pos,int no){
			Node * curnt=head;
			int i=1;
			while(i<pos-1){
				i++;
				curnt=curnt->next;
			}
			Node * temp=new Node;
			temp->data=no;
			
			temp->next=curnt->next;
			curnt->next=temp;
			
		}
	//deleting the node in the end
		void deleteit(){
			Node * temp=tail;
			Node * curnt=head;
			
			while (curnt->next!=tail){
			curnt=curnt->next;	
			}
			curnt->next=NULL;
			tail=curnt;
			delete temp;
		}//deleting the node at a point
		void deleteat(int pos){
		
		Node * curnt =head;
		int i=1;
		while(i<pos-1){
			i++;
			curnt=curnt->next;
		}
		Node * temp=curnt->next;
		curnt->next=curnt->next->next;
		delete temp;
		}
		
		//to print the no of items
		void countitems(){
			Node * curnt =head;
			int i=0;
			while(curnt!=NULL){
				curnt=curnt->next;
				i++;
				
				
			}
			cout<<"The number of items are "<<i<<endl;
		}
	//to diplay everything
		void display(){
			Node * curnt=head;
			while(curnt!=NULL){
				cout<<curnt->data<<"->";
				curnt=curnt->next;
			}
			cout<<"NULL";
			cout<<endl;
		}
};

//the main function
int main(){
	Linkedlist L1;
	L1.insrt(10);
	L1.insrt(11);
	L1.insrt(12);
	L1.insrt(14);
	L1.insrt(15);
	L1.insrt(16);
	L1.display();
	L1.insrtat(4,13);
	L1.display();
	L1.deleteit();
	L1.display();
	L1.deleteat(4);
	L1.display();
	L1.countitems();
	
	
	return 0;
    }

