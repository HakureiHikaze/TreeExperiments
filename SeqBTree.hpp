//
// Created by Hikaze on 2021/9/7 18:46.
// 
//

#pragma once


#include "IBinaryTree.hpp"

namespace Hikaze {
    template <typename T>
    class SeqBTree : IBinaryTree<T> {
    public:
        SeqBTree();

        ~SeqBTree() override;

        void preOrder() override;
        void inOrder() override;
        void postOrder() override;
        void levelOrder() override;
        void setElement(unsigned int,const T&) override;

    private:
        unsigned int order;
        size_t capacity;
        T* pDataArray;
    };

    template<typename T>
    SeqBTree<T>::SeqBTree(): order(1) {
        capacity = (1<<order)-1;
        pDataArray = (T*) calloc(capacity, sizeof(T));
    }

    template<typename T>
    SeqBTree<T>::~SeqBTree() {
        delete[] pDataArray;
    }

    template<typename T>
    void SeqBTree<T>::preOrder() {
        for(int i = 0; i<capacity; i++){
            std::cout<<pDataArray[i]<<std::endl;
        }
    }

    template<typename T>
    void SeqBTree<T>::setElement(unsigned int index, const T & data) {
        size_t capBuffer = 0;
        if(index>=capacity) capBuffer = capacity;
        while(index>=capacity){
            order++;
            capacity += 1<<(order-1);
        }
        if(capBuffer){
            T* pBuffer = pDataArray;
            pDataArray = (T*) calloc(capacity, sizeof(T));
            std::cout<<"Capacity extended.\tNew capacity: "<<std::to_string(capacity)<<std::endl;
            //std::copy(pBuffer, pBuffer+capBuffer, pDataArray);
            for(int i = 0;i<capBuffer; i++){
                pDataArray[i] = pBuffer[i];
            }
            //std::cout<<malloc(pBuffer);
            delete pBuffer;
        }
        *(pDataArray+index-1) = data;

    }

    template<typename T>
    void SeqBTree<T>::inOrder() {

    }

    template<typename T>
    void SeqBTree<T>::postOrder() {

    }

    template<typename T>
    void SeqBTree<T>::levelOrder() {

    }
}
