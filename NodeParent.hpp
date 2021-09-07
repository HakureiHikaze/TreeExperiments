//
// Created by Hikaze on 2021/9/7.
//
#pragma once

#include <cstdlib>

template<typename T>
struct NodeParent {
    T data;
    size_t parent;
};
