#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
		Node(int value){
			next=NULL;
			data = value; 
		}
};

class Clinkedlist{
	public:
		Node * head;
		Clinkedlist(){
			head=NULL;
		}
	void insert(int value){
		Node * temp=new Node(value);
		
		Node * current=head;
		if(head==NULL){
			head=temp;
			temp->next=head;
		}
		else(current->next!=head){
			current=current->next;
			current->next=temp;
			temp->next=head;
		}	
	
	}	
	void insertAt(int pos,int value){
		Node * temp= new Node;
		Node * current = head;
		int i=1;
		while(i<pos-1){
			current=current->next;
			i++;
		}
		temp->next=current->next;
		current->next=temp;
	}
	void delete1(){
		Node * current=head;
		Node * temp;
		if(current->next->next!=NULL){
		current=current->next;
		temp=current->next;
		current->next=current->next->next;
		}	
		delete temp;
	}
	void display(){
		Node *current=head;
		while(current->next!=head){
			cout<<current->data<<"->";
			current=current->next;
		}
		cout<<head->data<<endl;
	}
	void deleteat(int pos){
	Node * current=head;
		
			int i=1;
			while(i<pos-1){
				current=current->next;
				i++;
			}
			Node * temp=current->next;
			current->next=current->next->next;
			delete temp;	
	}
	void countitems(){
			Node* current=head;
			int i=1;
			while(current->next!=head){
				current=current->next;
				i++;
			}
			cout<<"The number of items are "<<i<<endl;
		}
};
int main(){
	Clinkedlist L1;
	L1.insert(10);
	L1.insert(11);
	L1.insert(12);
	L1.insert(14);
	L1.insert(15);
	L1.insert(16);
	L1.insert(17);
	L1.display();
	L1.insertAt(13,4);
	L1.display();
	L1.delete1();
	L1.display();
	L1.deleteat(5);
	L1.display();
	L1.countitems();
	return 0;
}
