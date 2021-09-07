//
// Created by Hikaze on 2021/9/7.
//

#pragma once

#include <cstdlib>

namespace Hikaze{
    struct Node{
        size_t child;
        Node* pNext;
    };

    template<typename T>
    struct BNode{
        T data;
        Node* pChildArray;
    };
}