#include <iostream>
using namespace std;

class Node{
private:
  int data;
  Node *prev = NULL;
  Node *next = NULL;
public:
  Node(int input){
    data = input;
  }
  int get_data(){
    return data;
  }
  Node* get_prev(){
    return prev;
  }
  Node* get_next(){
    return next;
  }

  void set_prev(Node node){
    prev = &node;
  }

  void set_next(Node node){
    next = &node;
  }

};
    




int main(){
  Node n1(2);
  Node n2(3);
  n1.set_next(n2);
  cout << n1.get_data() << "\n" <<
    n1.get_prev() << "\n" <<
    n1.get_next() << "\n";
  
  Node temp = *n1.get_next();
  int temp2 = temp.get_data();
  cout << temp2 << "\n";   
}
