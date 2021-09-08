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
    private:
        BTNode<T>* pRoot;

    };
}