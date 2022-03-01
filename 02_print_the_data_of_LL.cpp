#include <iostream>
using namespace std;

//creation of node class basic......... 
class Node{
	public :
		int data;
	    Node *next;
		
		// constructor is in use to initialize the innitial memeber of the class..
		Node(int data){
			this->data=data;
			next=NULL;
			
		}
		
		
		
};






 void print(Node *head){
 	
 	// suggestion :- always ude a temporary variable for the use of head....so that
// 	our head can never be destrotyed ....... 
 	Node *temp=head;
 	
 	while(temp!=NULL){
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 cout<<endl;
	 
	 temp=head;
	 while(temp!=NULL){
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 
	 
	 while(head!=NULL){
 		cout<<head->data<<" ";
 		head=head->next;
	 }
 	
 	
 }


int main(){
	
		Node n1(1);
	Node *head=&n1; // head is a pointer variable of Node typr which store tha addresss of the n1;
//	cout<<head->data<<endl;
	
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);
	Node n6(6);
	
	n1.next = &n2;
	n2.next  = &n3;
	n3.next = &n4;
	n4.next = &n5;
	n5.next = &n6;
	print(head);
	cout<<endl;
	//	print(head);
	
	
	
	
	
	
}
