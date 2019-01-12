#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
		Node(){
			next = NULL;
		}
};

class Linkedlist{
	public:
		Node * head;
		Node * tail;
		Linkedlist(){
			head=NULL;
			tail=NULL;
		}
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
		void deleteit(){
			Node * temp=tail;
			Node * curnt=head;
			
			while (curnt->next!=tail){
			curnt=curnt->next;	
			}
			curnt->next=NULL;
			tail=curnt;
			delete temp;
		}
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
		
		
		void countitems(){
			Node * curnt =head;
			int i=0;
			while(curnt!=NULL){
				curnt=curnt->next;
				i++;
				
				
			}
			cout<<"The number of items are "<<i<<endl;
		}
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

