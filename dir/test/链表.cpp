#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *n;
	node* get(int i){
		node *p;
		p = this -> n;
		int j = 1;
		while ((p != NULL) && (j < i)) {
			p = p -> n;
			j++; 
		}
			return p;
	}
	node* operator [] (int i){
		node *p;
		p = this -> n;
		int j = 1;
		while ((p != NULL) && (j < i)) {
			p = p -> n;
			j++; 
		}
		return p;
	};
	int len(){
		node *p;
		int n = 0;
		p = this;
		while (p != NULL) {
			n++;
			p = p -> n; 
		}
		return n;
	}
	void insert (node* t, int i)
	{
		node * a = this -> get(i);
		this -> get(i - 1) -> n = t;
		t -> n = a;
	}
	void del (int i)
	{
		if (i == 1) 
		{
			node* a = this -> n -> n;
			this -> n = a;
			return ;
		}
		this -> get(i - 1) -> n = this -> get(i + 1);
	}
};
node *head, *p, *r;
int x;
int main(int argc, char** argv){
    cin >> x;
    head = new node;
    r = head;
    while (x != -1) {
    	p = new node;
    	p -> data = x;
    	p -> n = NULL;
    	r -> n = p;
    	r = p;
    	cin >> x; 
    }
    head -> del(2);
    for (int i = 1; i < head -> len(); i++)
    {
    	cout << (*head)[i] -> data << " ";
    }
    return 0;
}