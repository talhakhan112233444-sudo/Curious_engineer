#include<iostream>
//#include<chronro>
using namespace std;
//using namespace std::chrono;
class Node {
public:
	Node* next;
	Node* pre;
	int data;
	Node(int x) {
		data = x;
		next = nullptr;
		pre = nullptr;
	}
};

class DouList {
	Node* head;
	Node* tail;
	
	public:
	DouList() {
		head = tail =nullptr;
	}
	void addhead(int val) {
		Node* newNode = new Node(val);
		if(head == nullptr) {
			head = tail = newNode;
			return;
		}
		else {
			newNode->next = head;
			head->pre = newNode;
			head = newNode;
	}
}
		void addTail(int num) {
			Node* newNode = new Node(num);
			if(head == nullptr) 
			{
				head = tail = newNode;
			} else {
				tail->next = newNode;
				newNode->pre = tail;
				tail = newNode;
				//cout<<tail->pre->data;								
			}
			}
			void search_del(int num) {
				Node* newNode = new Node(num);
				
		}
			void display() {
				Node* temp = head;
				while (temp != nullptr) {
					cout<<temp->data<<" <-> ";
					temp = temp->next;
				}
				cout<<"NULL"<<endl;
}
};
int main() {
	DouList l;
	l.addhead(10);
//	l.addhead(13);
//	l.addTail(23);
	l.search_del(15);
//	l.addTail(4);
	cout<<"List :";
	l.display();
	return 0;
}





