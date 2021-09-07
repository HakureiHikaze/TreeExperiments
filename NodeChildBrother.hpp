//
// Created by Hikaze on 2021/9/7.
//

#pragma once

namespace Hikaze {
    template<typename T>
    struct CBNode {
        T data;
        CBNode<T> *pChildArray, *pBrother;
    };
}