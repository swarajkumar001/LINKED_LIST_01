// linked list 
// basically it is  a way to store data in non-contigious form ......
// craetion of LL(linked list)



#include <iostream>
using namespace std;
#include <cmath>


//creation of LL class basic......... 
class Node{
	public :
		int data;
		int *next;
		
		// constructor is in use to initialize the innitial memeber of the class..
		Node(int data){
			this->data=data;
			next=NULL;
			
		}
		
		
		
};

int main(){
	
	Node n1(1);
	Node *head=&n1; // head is a pointer variable of Node typr which store tha addresss of the n1;
	cout<<head->data<<endl;
	
	Node n2(2);
    //n1->next=&n2;

	
	
cout<<n1.data<<" "<<n2.data;
	
	
	
	
	
}

