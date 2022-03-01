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


Node *takeinput_better(){
	int data;
 	cin>> data;
 	Node *head=NULL;
 	Node *tail=NULL;
 	while(data!=-1){
 		Node *newNode=new Node(data);
 		if(head==NULL){
 			head=newNode;
 			tail=newNode;
 		
	 }
	 else{
	
	   tail->next=newNode;
	   tail=newNode;
	   //or tail->next=newNode;
	 	
	 	
	 }
	   cin>>data;
	 
	 }
 	
 	
 	
 	return head;
 	//the above fumction is complexicity of O(1).........
}

/* Node* takeinput(){
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
 	
 	
 	
 	 // check the complexicity of this input function .....
 	 //it is O(n^2).... jo ki bhut ganda hai yrrr...
 	 
 }*/




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
	
	Node *head=takeinput_better();
	print(head);
	
	
}
