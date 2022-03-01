// how to take input in the linked list.............

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

 Node* takeinput(){
 	int data;
 	cin>> data;
 	Node *head=NULL;
 	while(data!=-1){
 		Node *newNode=new Node(data);
 		if(head==NULL){
 			head=newNode;
 		
	 }
	 else{
	 	//head->next=newNode;
	 	Node *temp=head;
	 	while(temp->next!=NULL){
	 		temp=temp->next;
		 }
		 temp->next=newNode;
	 	
	 	
	 }
	   cin>>data;
	 
	 }
 	
 	
 	
 	return head;
 	
 	
 	
 	
 }




 void print(Node *head){
 	
 	// suggestion :- always ude a temporary variable for the use of head....so that
// 	our head can never be destrotyed ....... 
 	Node *temp=head;
 	
 	while(temp!=NULL){
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 
 	
 	
 }


int main(){
	
	Node *head=takeinput();
	print(head);
	
	/*
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
	
	*/
}
