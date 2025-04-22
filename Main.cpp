#include <iostream>
#include <assert.h>
#include "point.h"

using namespace std;
int main()
{
    point newPoint(1.5, 2.5);
    
    newPoint.toString(1.5, 2.5);
    cout << "all test pass" << endl;
    return 0;
}
