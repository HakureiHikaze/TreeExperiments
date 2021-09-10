//
// Created by Hikaze on 2021/9/7.
//

#pragma once

#include <iostream>

namespace Hikaze{
    template<typename T>
    struct BTNode{
        T data;
        BTNode<T>* pLeft,* pRight;
    public:
        BTNode():pLeft(nullptr),pRight(nullptr),data(T()){}
        template<typename DT>
        friend std::ostream& operator<<(std::ostream&, BTNode<DT>*);
    };

    template<typename DT>
    std::ostream &operator<<(std::ostream & os, BTNode<DT> * pNode) {
        os<<"\nAddr:\t"<<(void*)pNode<<
        "\nData:\t"<<pNode->data<<
        "\nLeft:\t"<<(void*)pNode->pLeft<<
        "\nRight:\t"<<(void*)pNode->pRight<<std::endl;
        return os;
    }
}