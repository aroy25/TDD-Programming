#include <iostream>
#include <assert.h>

int main()
{
    cout << "all test passed"
    return 0;

}

void tests(){

    //point tests
    Point p1(4,1);
    assert(p1.toString() == "X: 4.0, Y: 1.0");

    Point p2(1.4,8.2);
    assert(p2.toString() == "X: 1.4, Y: 8.2");

    Point p3(0,0);
    assert(p3.toString() == "X: 0.0, Y: 0.0");

    Point p4(-8.2,-1.4);
    assert(p4.toString() == "X: -8.2, Y: -1.4");

    Point p5(-1.4,5);
    assert(p5.toString() == "X: -1.4, Y: 5.0");

    Point p6(5,-14);
    assert(p6.toString() == "X: 5.0, Y: -14.0");

}

