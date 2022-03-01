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

Node *insertnode(int i,int data, Node *head){
	
	Node *newNode=new Node(data);
	Node *temp=head;
	int count=0;
	
	if(i==0){
		newNode->next=head;
		head=newNode;
		return head;
	}
	while(temp!=NULL && count<i-1){
		temp=temp->next;
		count++;
	}
	
	if(temp!=NULL){
		Node *ans=temp->next;
	    temp->next=newNode;
	    newNode->next=ans;
	}
	
	return head;
	
	
}
	
	
	
	
	
	
	

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





 void print(Node *head){
 	
 	
 	Node *temp=head;
 	
 	while(temp!=NULL){
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 
 	
 	
 }


int main(){
	
	Node *head=takeinput_better();
	print(head);
	int i,data;
	cin>>i;
	cin>>data;
	
	
	head=insertnode(i,data,head);
	print(head);
	
	
}
