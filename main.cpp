#include <iostream>
#include <cmath>
#include "SeqBTree.hpp"
using namespace std;
int main() {
    Hikaze::SeqBTree<char> t;
    double i = 0.0;
    int j = 0;
    while(i<100.0){
        t.setElement(j, '1');
        i+=1.0;
        j++;
    }
    t.preOrder();
    return 0;
}