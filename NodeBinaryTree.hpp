//
// Created by Hikaze on 2021/9/7.
//

#pragma once

namespace Hikaze{
    template<typename T>
    struct BTNode{
        T data;
        BTNode<T>* pLeft,* pRight;
    };
}