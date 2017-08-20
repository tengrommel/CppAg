#include <iostream>
// 有30个人，其中有男人、女人和小孩，这些人在一家花了50元；每个男人花3元，每个女人花2元，每个小孩花1元；
// 问男人、女人和小孩各有几人；


using namespace std;

int main() {
    int x, y, z, count = 0;
    cout << "Men, Women, Children" << endl;
    cout << "------------------------" << endl;
    for (x = 0; x <=9; x++) {
        y = 20 - 2*x;
        z = 30 - x - y;
        if (3*x+2*y+z==50)
            cout << ++count << " " << x << y << z << endl;
    }

    // x 最大为9
    // 固定x然后根据多项式求解
    // 列出所有的情况
    return 0;
}