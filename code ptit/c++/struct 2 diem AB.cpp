#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct Point {
    double x, y;
};

int main(){
    int t;
    cin >> t;
while(t--){
    Point A, B;
    cin >> A.x >> A.y >> B.x >> B.y;
    double distanceAB = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    cout << fixed << setprecision(4) << distanceAB << endl;

return 0;
}
}