// STUB CODE
////////////
#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }
           return root;
           }
        }

      void levelOrder(Node * root){
      //Write your code here
        queue< Node* > visited;
        queue< Node* > to_visit;
        Node* current;

        to_visit.push(root);
        while(!(to_visit.empty())) {
            current = to_visit.front();
            if (current->left != NULL) {
                to_visit.push(current->left);
            }
            if (current->right != NULL) {
                to_visit.push(current->right);
            }
            visited.push(current);
            to_visit.pop();
        }

        while(!visited.empty()) {
            current = visited.front();
            cout << current->data << " ";
            visited.pop();
        }

	}
};//End of Solution

int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
