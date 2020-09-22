#include <iostream>

using namespace std;

struct octree {
    double x;
    double y;
    double z;
};

int main()
{
    octree ot;
    ot.x = 1;
    ot.y = 2;
    ot.z = 3;
    cout << ot.x << "\t" << ot.y << "\t"<< ot.z;
    return 0;
}

