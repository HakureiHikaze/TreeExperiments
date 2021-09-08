#include <iostream>
#include <cmath>
#include "SeqBTree.hpp"
using namespace std;
int main() {
    Hikaze::SeqBTree<double> t;
    double i = 47.25;
    int j = 0;
    while(i<100.0){
        t.setElement(j, cos(i));
        i+=1.0;
        j++;
    }
    t.preOrder();
    return 0;
}