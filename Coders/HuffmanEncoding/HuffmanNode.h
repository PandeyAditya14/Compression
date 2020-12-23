//
// Created by aditya on 23/12/20.
//

#ifndef HUFFMANENCODING_HUFFMANNODE_H
#define HUFFMANENCODING_HUFFMANNODE_H
#include "mInclude.h"

using namespace std;

class HuffmanNode {
public:
    int data;
    int count;
    HuffmanNode* left;
    HuffmanNode* right;
    HuffmanNode(int dt =0 , int cnt =0);
    static HuffmanNode* buildEncodingTree(const map<int,int>& freqTable);
    friend void hTreeTraversal(HuffmanNode* head , string code);
};


#endif //HUFFMANENCODING_HUFFMANNODE_H
