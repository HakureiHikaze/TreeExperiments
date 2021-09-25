cmake_minimum_required(VERSION 3.20)
project(TreeExperiments)

set(CMAKE_CXX_STANDARD 20)
include_directories("C:\\Users\\Administrator\\CLionProjects\\Queue_n_Stack_learning")
include_directories("D:\\Hikaze_Development\\2021DataStructure\\0805LinearList")

add_executable(TreeExperiments main.cpp NodeParent.hpp NodeChild.hpp
        NodeChildBrother.hpp NodeBinaryTree.hpp IBinaryTree.hpp SeqBTree.hpp
        BinaryTree.hpp
        )
