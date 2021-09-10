//
// Created by hikaze on 2021/9/8.
//

#pragma once

#include "NodeBinaryTree.hpp"
#include "IBinaryTree.hpp"
namespace Hikaze {
    template<typename T>
    class BinaryTree : IBinaryTree<T>{
    public:
        BinaryTree();
        ~BinaryTree() override;

        void preOrder() override;
        void inOrder() override;
        void postOrder() override;
        void levelOrder() override;
        void setElement(unsigned int,const T&) override;
    private:
        BTNode<T>* pRoot;
        void delTree(BTNode<T>*);
        void preOrder(BTNode<T>*);
        void inOrder(BTNode<T>*);
        void postOrder(BTNode<T>*);
        void levelOrder(BTNode<T>*);
    };

    template<typename T>
    BinaryTree<T>::BinaryTree():pRoot(nullptr){}

    template<typename T>
    BinaryTree<T>::~BinaryTree() {
        delTree(pRoot);
    }

    template<typename T>
    void BinaryTree<T>::delTree(BTNode<T>* p) {
        if(!p)return;
        if(p->pLeft)delTree(p->pLeft);
        if(p->pRight)delTree(p->pRight);
        delete p;
    }

    template<typename T>
    void BinaryTree<T>::preOrder() {
        preOrder(pRoot);
    }

    template<typename T>
    void BinaryTree<T>::preOrder(BTNode<T> * p) {
        if(!p)return;
        cout<<*p;
        if(p->pLeft)preOrder(p->pLeft);
        if(p->pRight)preOrder(p->pRight);
    }

    template<typename T>
    void BinaryTree<T>::inOrder(BTNode<T> *) {
        if(!p)return;
        if(p->pLeft)preOrder(p->pLeft);
        cout<<*p;
        if(p->pRight)preOrder(p->pRight);
    }

    template<typename T>
    void BinaryTree<T>::postOrder(BTNode<T> *) {
        if(!p)return;
        if(p->pLeft)preOrder(p->pLeft);
        if(p->pRight)preOrder(p->pRight);
        cout<<*p;
    }

    template<typename T>
    void BinaryTree<T>::inOrder() {
        inOrder(pRoot);
    }

    template<typename T>
    void BinaryTree<T>::postOrder() {
        postOrder(pRoot);
    }
}