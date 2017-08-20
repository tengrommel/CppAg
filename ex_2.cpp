#include <iostream>

// 若每步跨2阶，则最后剩1阶；若每步跨3步，则最后剩2阶；若每步跨5，则最后剩4阶；
// 若每步跨6，则最后剩5阶；若每步跨7，最后剩0；


using namespace std;

int main() {
    int n = 1;
    while(!((n%2==1)&&(n%3==2)&&(n%5==4)&&(n%6==5)&&(n%7==0)))
        n++;
    cout << "Count the stairs=" << n << endl;

    return 0;
}