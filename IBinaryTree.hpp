//
// Created by Hikaze on 2021/9/7 18:15.
// 
//

#pragma once

#include <iostream>

namespace Hikaze {
    template<typename T>
    class IBinaryTree {
    public:
        IBinaryTree() = default;
        virtual ~IBinaryTree() = default;
        virtual void preOrder() = 0;
        virtual void inOrder() = 0;
        virtual void postOrder() = 0;
        virtual void levelOrder() = 0;
        virtual void setElement(unsigned int,const T&) = 0;
    };
}