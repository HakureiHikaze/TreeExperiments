#include <iostream>
#include <cmath>
#include "SeqBTree.hpp"
using namespace std;
int main() {
    Hikaze::SeqBTree<float> t;
    double i = 0;
    int j = 0;
    while(i<100.0){
        t.setElement(j, cos(i));
        i+=1.0;
        j++;
    }
    t.preOrder();
    return 0;
}