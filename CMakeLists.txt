cmake_minimum_required(VERSION 3.20)
project(TreeExperiments)

set(CMAKE_CXX_STANDARD 20)

add_executable(TreeExperiments main.cpp NodeParent.hpp NodeChild.hpp NodeChildBrother.hpp NodeBinaryTree.hpp IBinaryTree.hpp SeqBTree.hpp BinaryTree.hpp)
