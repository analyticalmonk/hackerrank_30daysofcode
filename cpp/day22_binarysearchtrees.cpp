// STUB CODE
////////////
#include <iostream>
#include <cstddef>
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

        	int getHeight(Node* root){

          //Write your code here
          //////////////////////
            if ((root == NULL) || ((root->left == NULL) && (root->right == NULL))) {
                return 0;
            }
            int l_height = getHeight(root->left);
            int r_height = getHeight(root->right);
            return 1 + ((l_height >= r_height)?l_height:r_height);
          //End of Solution
          /////////////////
        }
};

// STUB CODE
////////////
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    int height= myTree.getHeight(root);
    cout<<height;
    return 0;
}
