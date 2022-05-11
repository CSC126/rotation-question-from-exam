#include<iostream>
using namespace std;

int main() {
    
    int x(6), y(7), z(9), w(11);
    int t1, t2, t3, t4;
    
//    t1 = x;
//    t2 = y;
//    t3 = z;
//    t4 = w;
//
//
//    y = t1;
//    z = t2;
//    w = t3;
//    x = t4;
    
    cout << "Original: " << x << " " << y << " " << z << " " << w << endl;
    
    t1 = w; //store last value
    
    w = z;
    z = y;
    y = x;
    x = t1;
    

    cout << "Rotated: " << x << " " << y << " " << z << " " << w << endl;
    
    
    
    
    cout << endl;
    return 0;
}
