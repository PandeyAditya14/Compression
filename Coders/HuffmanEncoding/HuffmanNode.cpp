//
// Created by aditya on 23/12/20.
//

#include "HuffmanNode.h"

using namespace std;

class Compare{
public:
    bool operator()(HuffmanNode* x, HuffmanNode* y){
        return x->count > y->count ;
    }
};

HuffmanNode::HuffmanNode(int dt , int cnt) {
    this->data = dt;
    this->count = cnt;
    this->left = NULL;
    this->right = NULL;
}

HuffmanNode* HuffmanNode::buildEncodingTree(const map<int,int>& freqTable) {

    priority_queue <HuffmanNode*, vector<HuffmanNode*>, Compare> Huffman_queue; // Creating a Priority Queue where comparator is working on count
    for (auto it: freqTable) {
        Huffman_queue.push(new HuffmanNode(it.first,it.second));
    }
    while(Huffman_queue.size()>1){
        HuffmanNode* newNode = new HuffmanNode;
        HuffmanNode* leftNode, *rightNode;
        leftNode = Huffman_queue.top();
        Huffman_queue.pop();
        rightNode = Huffman_queue.top();
        Huffman_queue.pop();
        newNode->left = leftNode;
        newNode->right = rightNode;
        newNode->count = leftNode->count + rightNode->count;
        Huffman_queue.push(newNode);
    }
    HuffmanNode *res;
    res = Huffman_queue.top();
    Huffman_queue.pop();
    return res;
}

void htreeTraversal(HuffmanNode* head,string code =""){
    if (head->left == NULL && head ->right ==NULL){
        cout<<head->data<<": "<<code<<"\n";
        return;
    }
    else{
        if(head->right!= NULL) htreeTraversal(head->right,code+"1");
        if(head->left!= NULL) htreeTraversal(head->left,code+"0");
    }
    return;
}
int main(){
    map<int,int> freqTable;
    freqTable.insert(pair<int,int>(21,23));
    freqTable.insert(pair<int,int>(19,44));
    freqTable.insert(pair<int,int>(123,100));
    freqTable.insert(pair<int,int>(2,10));
    freqTable.insert(pair<int,int>(25,16));
    freqTable.insert(pair<int,int>(16,89));
    HuffmanNode* as = HuffmanNode::buildEncodingTree(freqTable);
    htreeTraversal(as,"");
    return 0;
}