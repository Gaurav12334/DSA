#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;


    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
        back = NULL;
    }

     Node(int data1){
        data = data1;
        next = NULL;
        back = NULL;
    }
};

Node* convertDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i],NULL,prev);
        prev -> next = temp;
        prev = temp;
    }

    return head;
}

void print(Node* head){
    while(head){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}



int main(){

    vector<int>arr = {12,5,6,7};
    Node* head = convertDLL(arr);
    print(head);






    return 0;
}





